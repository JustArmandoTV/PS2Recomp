#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00133940
// Address: 0x133940 - 0x133990
void sub_00133940_0x133940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00133940_0x133940");
#endif

    ctx->pc = 0x133940u;

    // 0x133940: 0x44086000  mfc1        $t0, $f12
    ctx->pc = 0x133940u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x133944: 0x44096800  mfc1        $t1, $f13
    ctx->pc = 0x133944u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[13], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x133948: 0x440a7000  mfc1        $t2, $f14
    ctx->pc = 0x133948u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[14], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x13394c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x13394cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x133950: 0x48a93000  qmtc2.ni    $t1, $vf6
    ctx->pc = 0x133950u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x133954: 0x48aa3800  qmtc2.ni    $t2, $vf7
    ctx->pc = 0x133954u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(GPR_VEC(ctx, 10));
    // 0x133958: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x133958u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13395c: 0xd8a20010  lqc2        $vf2, 0x10($a1)
    ctx->pc = 0x13395cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x133960: 0x4bc50858  vmulx.xyz   $vf1, $vf1, $vf5x
    ctx->pc = 0x133960u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x133964: 0x4bc61098  vmulx.xyz   $vf2, $vf2, $vf6x
    ctx->pc = 0x133964u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x133968: 0xd8a30020  lqc2        $vf3, 0x20($a1)
    ctx->pc = 0x133968u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x13396c: 0xd8a40030  lqc2        $vf4, 0x30($a1)
    ctx->pc = 0x13396cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x133970: 0x4bc718d8  vmulx.xyz   $vf3, $vf3, $vf7x
    ctx->pc = 0x133970u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x133974: 0xf8810000  sqc2        $vf1, 0x0($a0)
    ctx->pc = 0x133974u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x133978: 0xf8820010  sqc2        $vf2, 0x10($a0)
    ctx->pc = 0x133978u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x13397c: 0xf8830020  sqc2        $vf3, 0x20($a0)
    ctx->pc = 0x13397cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x133980: 0x3e00008  jr          $ra
    ctx->pc = 0x133980u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x133984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x133980u;
            // 0x133984: 0xf8840030  sqc2        $vf4, 0x30($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[4]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x133988u;
    // 0x133988: 0x0  nop
    ctx->pc = 0x133988u;
    // NOP
    // 0x13398c: 0x0  nop
    ctx->pc = 0x13398cu;
    // NOP
}
