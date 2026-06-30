#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0033BD70
// Address: 0x33bd70 - 0x33bd80
void sub_0033BD70_0x33bd70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033BD70_0x33bd70");
#endif

    ctx->pc = 0x33bd70u;

    // 0x33bd70: 0x3e00008  jr          $ra
    ctx->pc = 0x33BD70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33BD74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33BD70u;
            // 0x33bd74: 0x8c82011c  lw          $v0, 0x11C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 284)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33BD78u;
    // 0x33bd78: 0x0  nop
    ctx->pc = 0x33bd78u;
    // NOP
    // 0x33bd7c: 0x0  nop
    ctx->pc = 0x33bd7cu;
    // NOP
}
