#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020FB00
// Address: 0x20fb00 - 0x20fbe8
void sub_0020FB00_0x20fb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020FB00_0x20fb00");
#endif

    ctx->pc = 0x20fb00u;

    // 0x20fb00: 0xc4a2001c  lwc1        $f2, 0x1C($a1)
    ctx->pc = 0x20fb00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20fb04: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x20fb04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x20fb08: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20fb08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x20fb0c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20fb0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20fb10: 0x24850010  addiu       $a1, $a0, 0x10
    ctx->pc = 0x20fb10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x20fb14: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x20fb14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x20fb18: 0x44071000  mfc1        $a3, $f2
    ctx->pc = 0x20fb18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x20fb1c: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x20fb1cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x20fb20: 0xd89b0000  lqc2        $vf27, 0x0($a0)
    ctx->pc = 0x20fb20u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20fb24: 0xd8bc0000  lqc2        $vf28, 0x0($a1)
    ctx->pc = 0x20fb24u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x20fb28: 0x4bd3dfac  vsub.xyz    $vf30, $vf27, $vf19
    ctx->pc = 0x20fb28u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x20fb2c: 0x4bd8e7ec  vsub.xyz    $vf31, $vf28, $vf24
    ctx->pc = 0x20fb2cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[28], ctx->vu0_vf[24]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x20fb30: 0xd85d0000  lqc2        $vf29, 0x0($v0)
    ctx->pc = 0x20fb30u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20fb34: 0x4bddf2fe  vopmula.xyz $ACC, $vf30, $vf29
    ctx->pc = 0x20fb34u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[30], ctx->vu0_vf[29]);
    // 0x20fb38: 0x4bdeefae  vopmsub.xyz $vf30, $vf29, $vf30
    ctx->pc = 0x20fb38u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], ctx->vu0_vf[30]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x20fb3c: 0x4bdfeafe  vopmula.xyz $ACC, $vf29, $vf31
    ctx->pc = 0x20fb3cu;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[29], ctx->vu0_vf[31]);
    // 0x20fb40: 0x4bddffee  vopmsub.xyz $vf31, $vf31, $vf29
    ctx->pc = 0x20fb40u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], ctx->vu0_vf[29]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x20fb44: 0x4bdde86a  vmul.xyz    $vf1, $vf29, $vf29
    ctx->pc = 0x20fb44u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], ctx->vu0_vf[29]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20fb48: 0x4bde81bc  vmulax.xyz  $ACC, $vf16, $vf30x
    ctx->pc = 0x20fb48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[30], ctx->vu0_vf[30], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x20fb4c: 0x4bde88bd  vmadday.xyz $ACC, $vf17, $vf30y
    ctx->pc = 0x20fb4cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[30], ctx->vu0_vf[30], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x20fb50: 0x4bde978a  vmaddz.xyz  $vf30, $vf18, $vf30z
    ctx->pc = 0x20fb50u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[30], ctx->vu0_vf[30], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x20fb54: 0x4bdfa9bc  vmulax.xyz  $ACC, $vf21, $vf31x
    ctx->pc = 0x20fb54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[21], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x20fb58: 0x4bdfb0bd  vmadday.xyz $ACC, $vf22, $vf31y
    ctx->pc = 0x20fb58u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[22], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x20fb5c: 0x4bdfbfca  vmaddz.xyz  $vf31, $vf23, $vf31z
    ctx->pc = 0x20fb5cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[23], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x20fb60: 0x4bf4f0ea  vmul.xyzw   $vf3, $vf30, $vf20
    ctx->pc = 0x20fb60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[30], ctx->vu0_vf[20]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x20fb64: 0x4bf9f92a  vmul.xyzw   $vf4, $vf31, $vf25
    ctx->pc = 0x20fb64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x20fb68: 0x4bd409bf  vmulaw.xyz  $ACC, $vf1, $vf20w
    ctx->pc = 0x20fb68u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[20], ctx->vu0_vf[20], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = res; }
    // 0x20fb6c: 0x4bd908bf  vmaddaw.xyz $ACC, $vf1, $vf25w
    ctx->pc = 0x20fb6cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[25], ctx->vu0_vf[25], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x20fb70: 0x4bc3f2bd  vmadda.xyz  $ACC, $vf30, $vf3
    ctx->pc = 0x20fb70u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], ctx->vu0_vf[3]); ctx->vu0_acc = PS2_VADD(ctx->vu0_acc, mul_res); }
    // 0x20fb74: 0x4bc4f969  vmadd.xyz   $vf5, $vf31, $vf4
    ctx->pc = 0x20fb74u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], ctx->vu0_vf[4]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x20fb78: 0x4bdbe06c  vsub.xyz    $vf1, $vf28, $vf27
    ctx->pc = 0x20fb78u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[28], ctx->vu0_vf[27]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20fb7c: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x20fb7cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x20fb80: 0x48a83000  qmtc2.ni    $t0, $vf6
    ctx->pc = 0x20fb80u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x20fb84: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x20fb84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x20fb88: 0x4bdd086a  vmul.xyz    $vf1, $vf1, $vf29
    ctx->pc = 0x20fb88u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[29]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20fb8c: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x20fb8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x20fb90: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x20fb90u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20fb94: 0x4a2007ac  vsub.w      $vf30, $vf0, $vf0
    ctx->pc = 0x20fb94u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x20fb98: 0x4a0533bc  vdiv        $Q, $vf6x, $vf5x
    ctx->pc = 0x20fb98u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x20fb9c: 0x4b010841  vaddy.x     $vf1, $vf1, $vf1y
    ctx->pc = 0x20fb9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20fba0: 0x4a25f7c0  vaddx.w     $vf31, $vf30, $vf5x
    ctx->pc = 0x20fba0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x20fba4: 0x4b010842  vaddz.x     $vf1, $vf1, $vf1z
    ctx->pc = 0x20fba4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20fba8: 0x4a210758  vmulx.w     $vf29, $vf0, $vf1x
    ctx->pc = 0x20fba8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x20fbac: 0x4a0003bf  vwaitq
    ctx->pc = 0x20fbacu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x20fbb0: 0x4a20f7a0  vaddq.w     $vf30, $vf30, $Q
    ctx->pc = 0x20fbb0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x20fbb4: 0xf87f0020  sqc2        $vf31, 0x20($v1)
    ctx->pc = 0x20fbb4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x20fbb8: 0xf87d0000  sqc2        $vf29, 0x0($v1)
    ctx->pc = 0x20fbb8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x20fbbc: 0xf87e0010  sqc2        $vf30, 0x10($v1)
    ctx->pc = 0x20fbbcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x20fbc0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x20fbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x20fbc4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x20fbc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x20fbc8: 0xc4810034  lwc1        $f1, 0x34($a0)
    ctx->pc = 0x20fbc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20fbcc: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x20fbccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20fbd0: 0x24430040  addiu       $v1, $v0, 0x40
    ctx->pc = 0x20fbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x20fbd4: 0xe4410034  swc1        $f1, 0x34($v0)
    ctx->pc = 0x20fbd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x20fbd8: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x20fbd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x20fbdc: 0xa0450000  sb          $a1, 0x0($v0)
    ctx->pc = 0x20fbdcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x20fbe0: 0x3e00008  jr          $ra
    ctx->pc = 0x20FBE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20FBE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20FBE0u;
            // 0x20fbe4: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20FBE8u;
}
