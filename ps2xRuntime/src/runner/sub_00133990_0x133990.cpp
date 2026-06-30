#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00133990
// Address: 0x133990 - 0x1339e0
void sub_00133990_0x133990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00133990_0x133990");
#endif

    ctx->pc = 0x133990u;

    // 0x133990: 0x44086000  mfc1        $t0, $f12
    ctx->pc = 0x133990u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x133994: 0x44096800  mfc1        $t1, $f13
    ctx->pc = 0x133994u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[13], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x133998: 0x440a7000  mfc1        $t2, $f14
    ctx->pc = 0x133998u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[14], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x13399c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x13399cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1339a0: 0x48a93000  qmtc2.ni    $t1, $vf6
    ctx->pc = 0x1339a0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x1339a4: 0x48aa3800  qmtc2.ni    $t2, $vf7
    ctx->pc = 0x1339a4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(GPR_VEC(ctx, 10));
    // 0x1339a8: 0x4be00200  vaddx.xyzw  $vf8, $vf0, $vf0x
    ctx->pc = 0x1339a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1339ac: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1339acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1339b0: 0xd8a20010  lqc2        $vf2, 0x10($a1)
    ctx->pc = 0x1339b0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1339b4: 0xd8a30020  lqc2        $vf3, 0x20($a1)
    ctx->pc = 0x1339b4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1339b8: 0xd8a40030  lqc2        $vf4, 0x30($a1)
    ctx->pc = 0x1339b8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1339bc: 0x4bc509bc  vmulax.xyz  $ACC, $vf1, $vf5x
    ctx->pc = 0x1339bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1339c0: 0x4bc610bc  vmaddax.xyz $ACC, $vf2, $vf6x
    ctx->pc = 0x1339c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1339c4: 0x4bc718bc  vmaddax.xyz $ACC, $vf3, $vf7x
    ctx->pc = 0x1339c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1339c8: 0x4bc0220b  vmaddw.xyz  $vf8, $vf4, $vf0w
    ctx->pc = 0x1339c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1339cc: 0xf8810000  sqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1339ccu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1339d0: 0xf8820010  sqc2        $vf2, 0x10($a0)
    ctx->pc = 0x1339d0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1339d4: 0xf8830020  sqc2        $vf3, 0x20($a0)
    ctx->pc = 0x1339d4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1339d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1339D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1339DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1339D8u;
            // 0x1339dc: 0xf8880030  sqc2        $vf8, 0x30($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[8]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1339E0u;
}
