#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A79E8
// Address: 0x1a79e8 - 0x1a79f8
void sub_001A79E8_0x1a79e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A79E8_0x1a79e8");
#endif

    ctx->pc = 0x1a79e8u;

    // 0x1a79e8: 0xac800090  sw          $zero, 0x90($a0)
    ctx->pc = 0x1a79e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 0));
    // 0x1a79ec: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1a79ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1a79f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A79F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A79F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A79F0u;
            // 0x1a79f4: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A79F8u;
}
