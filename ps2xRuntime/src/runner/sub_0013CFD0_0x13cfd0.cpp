#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013CFD0
// Address: 0x13cfd0 - 0x13cff0
void sub_0013CFD0_0x13cfd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013CFD0_0x13cfd0");
#endif

    ctx->pc = 0x13cfd0u;

    // 0x13cfd0: 0x7c800000  sq          $zero, 0x0($a0)
    ctx->pc = 0x13cfd0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 0));
    // 0x13cfd4: 0x7c800010  sq          $zero, 0x10($a0)
    ctx->pc = 0x13cfd4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 0));
    // 0x13cfd8: 0x7c800020  sq          $zero, 0x20($a0)
    ctx->pc = 0x13cfd8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 0));
    // 0x13cfdc: 0xf8800030  sqc2        $vf0, 0x30($a0)
    ctx->pc = 0x13cfdcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x13cfe0: 0xe48c0000  swc1        $f12, 0x0($a0)
    ctx->pc = 0x13cfe0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x13cfe4: 0xe48d0014  swc1        $f13, 0x14($a0)
    ctx->pc = 0x13cfe4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x13cfe8: 0x3e00008  jr          $ra
    ctx->pc = 0x13CFE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13CFECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13CFE8u;
            // 0x13cfec: 0xe48e0028  swc1        $f14, 0x28($a0) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13CFF0u;
}
