#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00520670
// Address: 0x520670 - 0x520680
void sub_00520670_0x520670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00520670_0x520670");
#endif

    ctx->pc = 0x520670u;

    // 0x520670: 0x3e00008  jr          $ra
    ctx->pc = 0x520670u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x520674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x520670u;
            // 0x520674: 0x24820084  addiu       $v0, $a0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 132));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x520678u;
    // 0x520678: 0x0  nop
    ctx->pc = 0x520678u;
    // NOP
    // 0x52067c: 0x0  nop
    ctx->pc = 0x52067cu;
    // NOP
}
