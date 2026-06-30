#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015C9F0
// Address: 0x15c9f0 - 0x15cad0
void sub_0015C9F0_0x15c9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015C9F0_0x15c9f0");
#endif

    ctx->pc = 0x15c9f0u;

    // 0x15c9f0: 0xcca00000  pref        0x00, 0x0($a1)
    ctx->pc = 0x15c9f0u;
    // PREF instruction (ignored)
    // 0x15c9f4: 0x78c80000  lq          $t0, 0x0($a2)
    ctx->pc = 0x15c9f4u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x15c9f8: 0x78c90010  lq          $t1, 0x10($a2)
    ctx->pc = 0x15c9f8u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x15c9fc: 0x78ca0020  lq          $t2, 0x20($a2)
    ctx->pc = 0x15c9fcu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x15ca00: 0x482b5000  qmfc2.ni    $t3, $vf10
    ctx->pc = 0x15ca00u;
    SET_GPR_VEC(ctx, 11, _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x15ca04: 0xcc800000  pref        0x00, 0x0($a0)
    ctx->pc = 0x15ca04u;
    // PREF instruction (ignored)
    // 0x15ca08: 0x71286488  pextlw      $t4, $t1, $t0
    ctx->pc = 0x15ca08u;
    SET_GPR_VEC(ctx, 12, PS2_PEXTLW(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x15ca0c: 0x71286ca8  pextuw      $t5, $t1, $t0
    ctx->pc = 0x15ca0cu;
    SET_GPR_VEC(ctx, 13, PS2_PEXTUW(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x15ca10: 0x716a7488  pextlw      $t6, $t3, $t2
    ctx->pc = 0x15ca10u;
    SET_GPR_VEC(ctx, 14, PS2_PEXTLW(GPR_VEC(ctx, 11), GPR_VEC(ctx, 10)));
    // 0x15ca14: 0x716a7ca8  pextuw      $t7, $t3, $t2
    ctx->pc = 0x15ca14u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUW(GPR_VEC(ctx, 11), GPR_VEC(ctx, 10)));
    // 0x15ca18: 0x71cc4389  pcpyld      $t0, $t6, $t4
    ctx->pc = 0x15ca18u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 14), GPR_VEC(ctx, 12)));
    // 0x15ca1c: 0x718e4ba9  pcpyud      $t1, $t4, $t6
    ctx->pc = 0x15ca1cu;
    SET_GPR_VEC(ctx, 9, _mm_unpackhi_epi64(GPR_VEC(ctx, 12), GPR_VEC(ctx, 14)));
    // 0x15ca20: 0x71ed5389  pcpyld      $t2, $t7, $t5
    ctx->pc = 0x15ca20u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 15), GPR_VEC(ctx, 13)));
    // 0x15ca24: 0x71af5ba9  pcpyud      $t3, $t5, $t7
    ctx->pc = 0x15ca24u;
    SET_GPR_VEC(ctx, 11, _mm_unpackhi_epi64(GPR_VEC(ctx, 13), GPR_VEC(ctx, 15)));
    // 0x15ca28: 0x48a80800  qmtc2.ni    $t0, $vf1
    ctx->pc = 0x15ca28u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x15ca2c: 0x48a91000  qmtc2.ni    $t1, $vf2
    ctx->pc = 0x15ca2cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x15ca30: 0x48aa1800  qmtc2.ni    $t2, $vf3
    ctx->pc = 0x15ca30u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 10));
    // 0x15ca34: 0x48ab2000  qmtc2.ni    $t3, $vf4
    ctx->pc = 0x15ca34u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 11));
    // 0x15ca38: 0xd8a50000  lqc2        $vf5, 0x0($a1)
    ctx->pc = 0x15ca38u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15ca3c: 0xd8a60010  lqc2        $vf6, 0x10($a1)
    ctx->pc = 0x15ca3cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x15ca40: 0xd8a70020  lqc2        $vf7, 0x20($a1)
    ctx->pc = 0x15ca40u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x15ca44: 0xd8a80030  lqc2        $vf8, 0x30($a1)
    ctx->pc = 0x15ca44u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x15ca48: 0x4be509bc  vmulax.xyzw $ACC, $vf1, $vf5x
    ctx->pc = 0x15ca48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x15ca4c: 0x4be510bd  vmadday.xyzw $ACC, $vf2, $vf5y
    ctx->pc = 0x15ca4cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x15ca50: 0x4be518be  vmaddaz.xyzw $ACC, $vf3, $vf5z
    ctx->pc = 0x15ca50u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x15ca54: 0x4be5228b  vmaddw.xyzw $vf10, $vf4, $vf5w
    ctx->pc = 0x15ca54u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x15ca58: 0x4be609bc  vmulax.xyzw $ACC, $vf1, $vf6x
    ctx->pc = 0x15ca58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x15ca5c: 0x4be610bd  vmadday.xyzw $ACC, $vf2, $vf6y
    ctx->pc = 0x15ca5cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x15ca60: 0x4be618be  vmaddaz.xyzw $ACC, $vf3, $vf6z
    ctx->pc = 0x15ca60u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x15ca64: 0x4be622cb  vmaddw.xyzw $vf11, $vf4, $vf6w
    ctx->pc = 0x15ca64u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x15ca68: 0x4be709bc  vmulax.xyzw $ACC, $vf1, $vf7x
    ctx->pc = 0x15ca68u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x15ca6c: 0x4be710bd  vmadday.xyzw $ACC, $vf2, $vf7y
    ctx->pc = 0x15ca6cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x15ca70: 0x4be718be  vmaddaz.xyzw $ACC, $vf3, $vf7z
    ctx->pc = 0x15ca70u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x15ca74: 0x4be7230b  vmaddw.xyzw $vf12, $vf4, $vf7w
    ctx->pc = 0x15ca74u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x15ca78: 0x4be809bc  vmulax.xyzw $ACC, $vf1, $vf8x
    ctx->pc = 0x15ca78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x15ca7c: 0x4be810bd  vmadday.xyzw $ACC, $vf2, $vf8y
    ctx->pc = 0x15ca7cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x15ca80: 0x4be818be  vmaddaz.xyzw $ACC, $vf3, $vf8z
    ctx->pc = 0x15ca80u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x15ca84: 0x4be8234b  vmaddw.xyzw $vf13, $vf4, $vf8w
    ctx->pc = 0x15ca84u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x15ca88: 0x48285000  qmfc2.ni    $t0, $vf10
    ctx->pc = 0x15ca88u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x15ca8c: 0x48295800  qmfc2.ni    $t1, $vf11
    ctx->pc = 0x15ca8cu;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x15ca90: 0x482a6000  qmfc2.ni    $t2, $vf12
    ctx->pc = 0x15ca90u;
    SET_GPR_VEC(ctx, 10, _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x15ca94: 0x482b6800  qmfc2.ni    $t3, $vf13
    ctx->pc = 0x15ca94u;
    SET_GPR_VEC(ctx, 11, _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x15ca98: 0x71286488  pextlw      $t4, $t1, $t0
    ctx->pc = 0x15ca98u;
    SET_GPR_VEC(ctx, 12, PS2_PEXTLW(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x15ca9c: 0x71286ca8  pextuw      $t5, $t1, $t0
    ctx->pc = 0x15ca9cu;
    SET_GPR_VEC(ctx, 13, PS2_PEXTUW(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x15caa0: 0x716a7488  pextlw      $t6, $t3, $t2
    ctx->pc = 0x15caa0u;
    SET_GPR_VEC(ctx, 14, PS2_PEXTLW(GPR_VEC(ctx, 11), GPR_VEC(ctx, 10)));
    // 0x15caa4: 0x716a7ca8  pextuw      $t7, $t3, $t2
    ctx->pc = 0x15caa4u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUW(GPR_VEC(ctx, 11), GPR_VEC(ctx, 10)));
    // 0x15caa8: 0x71cc4389  pcpyld      $t0, $t6, $t4
    ctx->pc = 0x15caa8u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 14), GPR_VEC(ctx, 12)));
    // 0x15caac: 0x718e4ba9  pcpyud      $t1, $t4, $t6
    ctx->pc = 0x15caacu;
    SET_GPR_VEC(ctx, 9, _mm_unpackhi_epi64(GPR_VEC(ctx, 12), GPR_VEC(ctx, 14)));
    // 0x15cab0: 0x71ed5389  pcpyld      $t2, $t7, $t5
    ctx->pc = 0x15cab0u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 15), GPR_VEC(ctx, 13)));
    // 0x15cab4: 0x71af5ba9  pcpyud      $t3, $t5, $t7
    ctx->pc = 0x15cab4u;
    SET_GPR_VEC(ctx, 11, _mm_unpackhi_epi64(GPR_VEC(ctx, 13), GPR_VEC(ctx, 15)));
    // 0x15cab8: 0x7c880000  sq          $t0, 0x0($a0)
    ctx->pc = 0x15cab8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 8));
    // 0x15cabc: 0x7c890010  sq          $t1, 0x10($a0)
    ctx->pc = 0x15cabcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 9));
    // 0x15cac0: 0x7c8a0020  sq          $t2, 0x20($a0)
    ctx->pc = 0x15cac0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 10));
    // 0x15cac4: 0x3e00008  jr          $ra
    ctx->pc = 0x15CAC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15CAC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CAC4u;
            // 0x15cac8: 0xf8800030  sqc2        $vf0, 0x30($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[0]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15CACCu;
    // 0x15cacc: 0x0  nop
    ctx->pc = 0x15caccu;
    // NOP
}
