#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013C9B0
// Address: 0x13c9b0 - 0x13c9e0
void sub_0013C9B0_0x13c9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013C9B0_0x13c9b0");
#endif

    ctx->pc = 0x13c9b0u;

    // 0x13c9b0: 0x48220000  qmfc2.ni    $v0, $vf0
    ctx->pc = 0x13c9b0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x13c9b4: 0xf8800030  sqc2        $vf0, 0x30($a0)
    ctx->pc = 0x13c9b4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x13c9b8: 0x700214a8  pextuw      $v0, $zero, $v0
    ctx->pc = 0x13c9b8u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTUW(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x13c9bc: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x13c9bcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x13c9c0: 0x704014a8  pextuw      $v0, $v0, $zero
    ctx->pc = 0x13c9c0u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTUW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13c9c4: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x13c9c4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x13c9c8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x13c9c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x13c9cc: 0x3e00008  jr          $ra
    ctx->pc = 0x13C9CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C9D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C9CCu;
            // 0x13c9d0: 0x7c820000  sq          $v0, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13C9D4u;
    // 0x13c9d4: 0x0  nop
    ctx->pc = 0x13c9d4u;
    // NOP
    // 0x13c9d8: 0x0  nop
    ctx->pc = 0x13c9d8u;
    // NOP
    // 0x13c9dc: 0x0  nop
    ctx->pc = 0x13c9dcu;
    // NOP
}
