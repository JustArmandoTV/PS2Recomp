#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0033C010
// Address: 0x33c010 - 0x33c020
void sub_0033C010_0x33c010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033C010_0x33c010");
#endif

    ctx->pc = 0x33c010u;

    // 0x33c010: 0x3e00008  jr          $ra
    ctx->pc = 0x33C010u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33C014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33C010u;
            // 0x33c014: 0x8c82003c  lw          $v0, 0x3C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33C018u;
    // 0x33c018: 0x0  nop
    ctx->pc = 0x33c018u;
    // NOP
    // 0x33c01c: 0x0  nop
    ctx->pc = 0x33c01cu;
    // NOP
}
