#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_005216D0
// Address: 0x5216d0 - 0x5216e0
void sub_005216D0_0x5216d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005216D0_0x5216d0");
#endif

    ctx->pc = 0x5216d0u;

    // 0x5216d0: 0x3e00008  jr          $ra
    ctx->pc = 0x5216D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5216D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5216D0u;
            // 0x5216d4: 0x24820084  addiu       $v0, $a0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 132));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5216D8u;
    // 0x5216d8: 0x0  nop
    ctx->pc = 0x5216d8u;
    // NOP
    // 0x5216dc: 0x0  nop
    ctx->pc = 0x5216dcu;
    // NOP
}
