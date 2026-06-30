#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00133580
// Address: 0x133580 - 0x133600
void sub_00133580_0x133580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00133580_0x133580");
#endif

    ctx->pc = 0x133580u;

    // 0x133580: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x133580u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x133584: 0xd8a20010  lqc2        $vf2, 0x10($a1)
    ctx->pc = 0x133584u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x133588: 0xd8a30020  lqc2        $vf3, 0x20($a1)
    ctx->pc = 0x133588u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x13358c: 0xd8a40030  lqc2        $vf4, 0x30($a1)
    ctx->pc = 0x13358cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x133590: 0xd8c50000  lqc2        $vf5, 0x0($a2)
    ctx->pc = 0x133590u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x133594: 0xd8c60010  lqc2        $vf6, 0x10($a2)
    ctx->pc = 0x133594u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x133598: 0xd8c70020  lqc2        $vf7, 0x20($a2)
    ctx->pc = 0x133598u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x13359c: 0xd8c80030  lqc2        $vf8, 0x30($a2)
    ctx->pc = 0x13359cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x1335a0: 0x4be509bc  vmulax.xyzw $ACC, $vf1, $vf5x
    ctx->pc = 0x1335a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1335a4: 0x4be510bd  vmadday.xyzw $ACC, $vf2, $vf5y
    ctx->pc = 0x1335a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1335a8: 0x4be518be  vmaddaz.xyzw $ACC, $vf3, $vf5z
    ctx->pc = 0x1335a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1335ac: 0x4be5228b  vmaddw.xyzw $vf10, $vf4, $vf5w
    ctx->pc = 0x1335acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1335b0: 0x4be609bc  vmulax.xyzw $ACC, $vf1, $vf6x
    ctx->pc = 0x1335b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1335b4: 0x4be610bd  vmadday.xyzw $ACC, $vf2, $vf6y
    ctx->pc = 0x1335b4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1335b8: 0x4be618be  vmaddaz.xyzw $ACC, $vf3, $vf6z
    ctx->pc = 0x1335b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1335bc: 0x4be622cb  vmaddw.xyzw $vf11, $vf4, $vf6w
    ctx->pc = 0x1335bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1335c0: 0x4be709bc  vmulax.xyzw $ACC, $vf1, $vf7x
    ctx->pc = 0x1335c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1335c4: 0x4be710bd  vmadday.xyzw $ACC, $vf2, $vf7y
    ctx->pc = 0x1335c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1335c8: 0x4be718be  vmaddaz.xyzw $ACC, $vf3, $vf7z
    ctx->pc = 0x1335c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1335cc: 0x4be7230b  vmaddw.xyzw $vf12, $vf4, $vf7w
    ctx->pc = 0x1335ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1335d0: 0x4be809bc  vmulax.xyzw $ACC, $vf1, $vf8x
    ctx->pc = 0x1335d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1335d4: 0x4be810bd  vmadday.xyzw $ACC, $vf2, $vf8y
    ctx->pc = 0x1335d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1335d8: 0x4be818be  vmaddaz.xyzw $ACC, $vf3, $vf8z
    ctx->pc = 0x1335d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1335dc: 0x4be8234b  vmaddw.xyzw $vf13, $vf4, $vf8w
    ctx->pc = 0x1335dcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1335e0: 0xf88a0000  sqc2        $vf10, 0x0($a0)
    ctx->pc = 0x1335e0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x1335e4: 0xf88b0010  sqc2        $vf11, 0x10($a0)
    ctx->pc = 0x1335e4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x1335e8: 0xf88c0020  sqc2        $vf12, 0x20($a0)
    ctx->pc = 0x1335e8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x1335ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1335ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1335F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1335ECu;
            // 0x1335f0: 0xf88d0030  sqc2        $vf13, 0x30($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[13]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1335F4u;
    // 0x1335f4: 0x0  nop
    ctx->pc = 0x1335f4u;
    // NOP
    // 0x1335f8: 0x0  nop
    ctx->pc = 0x1335f8u;
    // NOP
    // 0x1335fc: 0x0  nop
    ctx->pc = 0x1335fcu;
    // NOP
}
