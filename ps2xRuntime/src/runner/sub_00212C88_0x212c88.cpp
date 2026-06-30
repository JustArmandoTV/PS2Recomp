#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00212C88
// Address: 0x212c88 - 0x212d70
void sub_00212C88_0x212c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00212C88_0x212c88");
#endif

    ctx->pc = 0x212c88u;

    // 0x212c88: 0xc4800060  lwc1        $f0, 0x60($a0)
    ctx->pc = 0x212c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212c8c: 0x248200e0  addiu       $v0, $a0, 0xE0
    ctx->pc = 0x212c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    // 0x212c90: 0xd8450020  lqc2        $vf5, 0x20($v0)
    ctx->pc = 0x212c90u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x212c94: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x212c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x212c98: 0xd8410010  lqc2        $vf1, 0x10($v0)
    ctx->pc = 0x212c98u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x212c9c: 0x248800a0  addiu       $t0, $a0, 0xA0
    ctx->pc = 0x212c9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    // 0x212ca0: 0xd88400e0  lqc2        $vf4, 0xE0($a0)
    ctx->pc = 0x212ca0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x212ca4: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x212ca4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x212ca8: 0x4be221bc  vmulax.xyzw $ACC, $vf4, $vf2x
    ctx->pc = 0x212ca8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x212cac: 0x4be208bd  vmadday.xyzw $ACC, $vf1, $vf2y
    ctx->pc = 0x212cacu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x212cb0: 0x4be2288a  vmaddz.xyzw $vf2, $vf5, $vf2z
    ctx->pc = 0x212cb0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x212cb4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x212cb4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x212cb8: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x212cb8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x212cbc: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x212cbcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x212cc0: 0x4be009bf  vmulaw.xyzw $ACC, $vf1, $vf0w
    ctx->pc = 0x212cc0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = res; }
    // 0x212cc4: 0x4be31048  vmaddx.xyzw $vf1, $vf2, $vf3x
    ctx->pc = 0x212cc4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x212cc8: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x212cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x212ccc: 0xc48000d0  lwc1        $f0, 0xD0($a0)
    ctx->pc = 0x212cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212cd0: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x212cd0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x212cd4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x212cd4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x212cd8: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x212cd8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x212cdc: 0x4be009bf  vmulaw.xyzw $ACC, $vf1, $vf0w
    ctx->pc = 0x212cdcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = res; }
    // 0x212ce0: 0x4be3104c  vmsubx.xyzw $vf1, $vf2, $vf3x
    ctx->pc = 0x212ce0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x212ce4: 0xf8e10000  sqc2        $vf1, 0x0($a3)
    ctx->pc = 0x212ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x212ce8: 0xd8650020  lqc2        $vf5, 0x20($v1)
    ctx->pc = 0x212ce8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x212cec: 0xd8840030  lqc2        $vf4, 0x30($a0)
    ctx->pc = 0x212cecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x212cf0: 0xd8630010  lqc2        $vf3, 0x10($v1)
    ctx->pc = 0x212cf0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x212cf4: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x212cf4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x212cf8: 0xd8c10010  lqc2        $vf1, 0x10($a2)
    ctx->pc = 0x212cf8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x212cfc: 0x4be221bc  vmulax.xyzw $ACC, $vf4, $vf2x
    ctx->pc = 0x212cfcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x212d00: 0x4be218bd  vmadday.xyzw $ACC, $vf3, $vf2y
    ctx->pc = 0x212d00u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x212d04: 0x4be2288a  vmaddz.xyzw $vf2, $vf5, $vf2z
    ctx->pc = 0x212d04u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x212d08: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x212d08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x212d0c: 0xf8c10010  sqc2        $vf1, 0x10($a2)
    ctx->pc = 0x212d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x212d10: 0xd88500a0  lqc2        $vf5, 0xA0($a0)
    ctx->pc = 0x212d10u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 160)));
    // 0x212d14: 0xd9040020  lqc2        $vf4, 0x20($t0)
    ctx->pc = 0x212d14u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x212d18: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x212d18u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x212d1c: 0xd9030010  lqc2        $vf3, 0x10($t0)
    ctx->pc = 0x212d1cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x212d20: 0xd8e10010  lqc2        $vf1, 0x10($a3)
    ctx->pc = 0x212d20u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x212d24: 0x4be229bc  vmulax.xyzw $ACC, $vf5, $vf2x
    ctx->pc = 0x212d24u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x212d28: 0x4be218bd  vmadday.xyzw $ACC, $vf3, $vf2y
    ctx->pc = 0x212d28u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x212d2c: 0x4be2208a  vmaddz.xyzw $vf2, $vf4, $vf2z
    ctx->pc = 0x212d2cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x212d30: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x212d30u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x212d34: 0xf8e10010  sqc2        $vf1, 0x10($a3)
    ctx->pc = 0x212d34u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x212d38: 0xd8c20010  lqc2        $vf2, 0x10($a2)
    ctx->pc = 0x212d38u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x212d3c: 0x4a200098  vmulx.w     $vf2, $vf0, $vf0x
    ctx->pc = 0x212d3cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x212d40: 0xf8c20010  sqc2        $vf2, 0x10($a2)
    ctx->pc = 0x212d40u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x212d44: 0xd8e10010  lqc2        $vf1, 0x10($a3)
    ctx->pc = 0x212d44u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x212d48: 0x4a200058  vmulx.w     $vf1, $vf0, $vf0x
    ctx->pc = 0x212d48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x212d4c: 0xf8e10010  sqc2        $vf1, 0x10($a3)
    ctx->pc = 0x212d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x212d50: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x212d50u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x212d54: 0x4a200098  vmulx.w     $vf2, $vf0, $vf0x
    ctx->pc = 0x212d54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x212d58: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x212d58u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x212d5c: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x212d5cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x212d60: 0x4a200058  vmulx.w     $vf1, $vf0, $vf0x
    ctx->pc = 0x212d60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x212d64: 0x3e00008  jr          $ra
    ctx->pc = 0x212D64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x212D64u;
            // 0x212d68: 0xf8e10000  sqc2        $vf1, 0x0($a3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x212D6Cu;
    // 0x212d6c: 0x0  nop
    ctx->pc = 0x212d6cu;
    // NOP
}
