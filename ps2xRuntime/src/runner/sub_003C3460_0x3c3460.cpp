#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003C3460
// Address: 0x3c3460 - 0x3c3470
void sub_003C3460_0x3c3460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C3460_0x3c3460");
#endif

    ctx->pc = 0x3c3460u;

    // 0x3c3460: 0x3e00008  jr          $ra
    ctx->pc = 0x3C3460u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C3464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C3460u;
            // 0x3c3464: 0x8c820788  lw          $v0, 0x788($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1928)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C3468u;
    // 0x3c3468: 0x0  nop
    ctx->pc = 0x3c3468u;
    // NOP
    // 0x3c346c: 0x0  nop
    ctx->pc = 0x3c346cu;
    // NOP
}
