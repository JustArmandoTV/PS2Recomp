#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013CBC0
// Address: 0x13cbc0 - 0x13cbf0
void sub_0013CBC0_0x13cbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013CBC0_0x13cbc0");
#endif

    ctx->pc = 0x13cbc0u;

    // 0x13cbc0: 0x46006007  neg.s       $f0, $f12
    ctx->pc = 0x13cbc0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[12]);
    // 0x13cbc4: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x13cbc4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x13cbc8: 0x4a800183  vaddw.y     $vf6, $vf0, $vf0w
    ctx->pc = 0x13cbc8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x13cbcc: 0x7c800000  sq          $zero, 0x0($a0)
    ctx->pc = 0x13cbccu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 0));
    // 0x13cbd0: 0x7c800020  sq          $zero, 0x20($a0)
    ctx->pc = 0x13cbd0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 0));
    // 0x13cbd4: 0xf8800030  sqc2        $vf0, 0x30($a0)
    ctx->pc = 0x13cbd4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x13cbd8: 0xe48d0000  swc1        $f13, 0x0($a0)
    ctx->pc = 0x13cbd8u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x13cbdc: 0xe48c0020  swc1        $f12, 0x20($a0)
    ctx->pc = 0x13cbdcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x13cbe0: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x13cbe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x13cbe4: 0xe48d0028  swc1        $f13, 0x28($a0)
    ctx->pc = 0x13cbe4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x13cbe8: 0x3e00008  jr          $ra
    ctx->pc = 0x13CBE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13CBECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13CBE8u;
            // 0x13cbec: 0xf8860010  sqc2        $vf6, 0x10($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[6]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13CBF0u;
}
