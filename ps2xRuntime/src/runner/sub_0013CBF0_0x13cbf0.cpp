#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013CBF0
// Address: 0x13cbf0 - 0x13cc20
void sub_0013CBF0_0x13cbf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013CBF0_0x13cbf0");
#endif

    ctx->pc = 0x13cbf0u;

    // 0x13cbf0: 0x46006007  neg.s       $f0, $f12
    ctx->pc = 0x13cbf0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[12]);
    // 0x13cbf4: 0x4be6033d  vmr32.xyzw  $vf6, $vf0
    ctx->pc = 0x13cbf4u;
    ctx->vu0_vf[6] = _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,1));
    // 0x13cbf8: 0x7c800000  sq          $zero, 0x0($a0)
    ctx->pc = 0x13cbf8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 0));
    // 0x13cbfc: 0x7c800010  sq          $zero, 0x10($a0)
    ctx->pc = 0x13cbfcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 0));
    // 0x13cc00: 0xf8800030  sqc2        $vf0, 0x30($a0)
    ctx->pc = 0x13cc00u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x13cc04: 0xe48d0000  swc1        $f13, 0x0($a0)
    ctx->pc = 0x13cc04u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x13cc08: 0xe48c0004  swc1        $f12, 0x4($a0)
    ctx->pc = 0x13cc08u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x13cc0c: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x13cc0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x13cc10: 0xe48d0014  swc1        $f13, 0x14($a0)
    ctx->pc = 0x13cc10u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x13cc14: 0x3e00008  jr          $ra
    ctx->pc = 0x13CC14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13CC18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13CC14u;
            // 0x13cc18: 0xf8860020  sqc2        $vf6, 0x20($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[6]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13CC1Cu;
    // 0x13cc1c: 0x0  nop
    ctx->pc = 0x13cc1cu;
    // NOP
}
