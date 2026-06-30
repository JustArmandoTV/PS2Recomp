#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A79D0
// Address: 0x1a79d0 - 0x1a79e8
void sub_001A79D0_0x1a79d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A79D0_0x1a79d0");
#endif

    ctx->pc = 0x1a79d0u;

    // 0x1a79d0: 0xac800090  sw          $zero, 0x90($a0)
    ctx->pc = 0x1a79d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 0));
    // 0x1a79d4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1a79d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1a79d8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1a79d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1a79dc: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1a79dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1a79e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A79E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A79E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A79E0u;
            // 0x1a79e4: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A79E8u;
}
