#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013CFF0
// Address: 0x13cff0 - 0x13d020
void sub_0013CFF0_0x13cff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013CFF0_0x13cff0");
#endif

    ctx->pc = 0x13cff0u;

    // 0x13cff0: 0x48220000  qmfc2.ni    $v0, $vf0
    ctx->pc = 0x13cff0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x13cff4: 0xf8800030  sqc2        $vf0, 0x30($a0)
    ctx->pc = 0x13cff4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x13cff8: 0x700214a8  pextuw      $v0, $zero, $v0
    ctx->pc = 0x13cff8u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTUW(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x13cffc: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x13cffcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x13d000: 0x704014a8  pextuw      $v0, $v0, $zero
    ctx->pc = 0x13d000u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTUW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13d004: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x13d004u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x13d008: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x13d008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x13d00c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x13d00cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x13d010: 0xe48c0030  swc1        $f12, 0x30($a0)
    ctx->pc = 0x13d010u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x13d014: 0xe48d0034  swc1        $f13, 0x34($a0)
    ctx->pc = 0x13d014u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x13d018: 0x3e00008  jr          $ra
    ctx->pc = 0x13D018u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D01Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13D018u;
            // 0x13d01c: 0xe48e0038  swc1        $f14, 0x38($a0) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13D020u;
}
