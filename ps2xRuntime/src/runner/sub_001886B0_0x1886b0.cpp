#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001886B0
// Address: 0x1886b0 - 0x1886c8
void sub_001886B0_0x1886b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001886B0_0x1886b0");
#endif

    ctx->pc = 0x1886b0u;

    // 0x1886b0: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x1886b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x1886b4: 0x2442fe20  addiu       $v0, $v0, -0x1E0
    ctx->pc = 0x1886b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966816));
    // 0x1886b8: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x1886b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x1886bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1886BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1886C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1886BCu;
            // 0x1886c0: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1886C4u;
    // 0x1886c4: 0x0  nop
    ctx->pc = 0x1886c4u;
    // NOP
}
