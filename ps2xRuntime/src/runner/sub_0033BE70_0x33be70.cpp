#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0033BE70
// Address: 0x33be70 - 0x33be80
void sub_0033BE70_0x33be70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033BE70_0x33be70");
#endif

    ctx->pc = 0x33be70u;

    // 0x33be70: 0x3e00008  jr          $ra
    ctx->pc = 0x33BE70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33BE74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33BE70u;
            // 0x33be74: 0x24820080  addiu       $v0, $a0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33BE78u;
    // 0x33be78: 0x0  nop
    ctx->pc = 0x33be78u;
    // NOP
    // 0x33be7c: 0x0  nop
    ctx->pc = 0x33be7cu;
    // NOP
}
