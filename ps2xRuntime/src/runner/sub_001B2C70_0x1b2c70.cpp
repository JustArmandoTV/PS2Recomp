#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B2C70
// Address: 0x1b2c70 - 0x1b2c78
void sub_001B2C70_0x1b2c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2C70_0x1b2c70");
#endif

    ctx->pc = 0x1b2c70u;

    // 0x1b2c70: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2C70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2C70u;
            // 0x1b2c74: 0x8c820048  lw          $v0, 0x48($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B2C78u;
}
