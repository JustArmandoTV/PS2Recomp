#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DC2E0
// Address: 0x1dc2e0 - 0x1dc2f0
void sub_001DC2E0_0x1dc2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DC2E0_0x1dc2e0");
#endif

    ctx->pc = 0x1dc2e0u;

    // 0x1dc2e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC2E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC2E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC2E0u;
            // 0x1dc2e4: 0xa08511a6  sb          $a1, 0x11A6($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 4518), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DC2E8u;
    // 0x1dc2e8: 0x0  nop
    ctx->pc = 0x1dc2e8u;
    // NOP
    // 0x1dc2ec: 0x0  nop
    ctx->pc = 0x1dc2ecu;
    // NOP
}
