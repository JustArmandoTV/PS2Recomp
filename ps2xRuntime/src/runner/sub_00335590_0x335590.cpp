#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00335590
// Address: 0x335590 - 0x3355a0
void sub_00335590_0x335590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00335590_0x335590");
#endif

    ctx->pc = 0x335590u;

    // 0x335590: 0x3e00008  jr          $ra
    ctx->pc = 0x335590u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x335594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x335590u;
            // 0x335594: 0x24820008  addiu       $v0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x335598u;
    // 0x335598: 0x0  nop
    ctx->pc = 0x335598u;
    // NOP
    // 0x33559c: 0x0  nop
    ctx->pc = 0x33559cu;
    // NOP
}
