#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002130B8
// Address: 0x2130b8 - 0x213140
void sub_002130B8_0x2130b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002130B8_0x2130b8");
#endif

    ctx->pc = 0x2130b8u;

    // 0x2130b8: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x2130b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2130bc: 0x24820070  addiu       $v0, $a0, 0x70
    ctx->pc = 0x2130bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x2130c0: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x2130c0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2130c4: 0xd8840010  lqc2        $vf4, 0x10($a0)
    ctx->pc = 0x2130c4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2130c8: 0xd8820020  lqc2        $vf2, 0x20($a0)
    ctx->pc = 0x2130c8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2130cc: 0xd8a60000  lqc2        $vf6, 0x0($a1)
    ctx->pc = 0x2130ccu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2130d0: 0xd8a30010  lqc2        $vf3, 0x10($a1)
    ctx->pc = 0x2130d0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2130d4: 0x4be131ac  vsub.xyzw   $vf6, $vf6, $vf1
    ctx->pc = 0x2130d4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2130d8: 0x4be329bc  vmulax.xyzw $ACC, $vf5, $vf3x
    ctx->pc = 0x2130d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x2130dc: 0x4be320bd  vmadday.xyzw $ACC, $vf4, $vf3y
    ctx->pc = 0x2130dcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x2130e0: 0x4be310ca  vmaddz.xyzw $vf3, $vf2, $vf3z
    ctx->pc = 0x2130e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2130e4: 0xd8480020  lqc2        $vf8, 0x20($v0)
    ctx->pc = 0x2130e4u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2130e8: 0xd8870070  lqc2        $vf7, 0x70($a0)
    ctx->pc = 0x2130e8u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x2130ec: 0xd8410010  lqc2        $vf1, 0x10($v0)
    ctx->pc = 0x2130ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2130f0: 0xd8c40010  lqc2        $vf4, 0x10($a2)
    ctx->pc = 0x2130f0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2130f4: 0x4be439bc  vmulax.xyzw $ACC, $vf7, $vf4x
    ctx->pc = 0x2130f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x2130f8: 0x4be408bd  vmadday.xyzw $ACC, $vf1, $vf4y
    ctx->pc = 0x2130f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x2130fc: 0x4be4410a  vmaddz.xyzw $vf4, $vf8, $vf4z
    ctx->pc = 0x2130fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x213100: 0xd8850100  lqc2        $vf5, 0x100($a0)
    ctx->pc = 0x213100u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x213104: 0xd88200e0  lqc2        $vf2, 0xE0($a0)
    ctx->pc = 0x213104u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x213108: 0x4be418ec  vsub.xyzw   $vf3, $vf3, $vf4
    ctx->pc = 0x213108u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x21310c: 0xd88100f0  lqc2        $vf1, 0xF0($a0)
    ctx->pc = 0x21310cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x213110: 0x4bc6112a  vmul.xyz    $vf4, $vf2, $vf6
    ctx->pc = 0x213110u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x213114: 0x4bc60a2a  vmul.xyz    $vf8, $vf1, $vf6
    ctx->pc = 0x213114u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x213118: 0x4bc629ea  vmul.xyz    $vf7, $vf5, $vf6
    ctx->pc = 0x213118u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x21311c: 0x4b042101  vaddy.x     $vf4, $vf4, $vf4y
    ctx->pc = 0x21311cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x213120: 0x4a884200  vaddx.y     $vf8, $vf8, $vf8x
    ctx->pc = 0x213120u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x213124: 0x4a4739c1  vaddy.z     $vf7, $vf7, $vf7y
    ctx->pc = 0x213124u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x213128: 0x4b042102  vaddz.x     $vf4, $vf4, $vf4z
    ctx->pc = 0x213128u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x21312c: 0x4a884102  vaddz.y     $vf4, $vf8, $vf8z
    ctx->pc = 0x21312cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x213130: 0x4a473900  vaddx.z     $vf4, $vf7, $vf7x
    ctx->pc = 0x213130u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x213134: 0x4be418e8  vadd.xyzw   $vf3, $vf3, $vf4
    ctx->pc = 0x213134u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x213138: 0x3e00008  jr          $ra
    ctx->pc = 0x213138u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21313Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x213138u;
            // 0x21313c: 0xf8e30000  sqc2        $vf3, 0x0($a3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x213140u;
}
