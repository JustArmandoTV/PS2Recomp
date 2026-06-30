#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00397750
// Address: 0x397750 - 0x397760
void sub_00397750_0x397750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00397750_0x397750");
#endif

    ctx->pc = 0x397750u;

    // 0x397750: 0x3e00008  jr          $ra
    ctx->pc = 0x397750u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x397754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x397750u;
            // 0x397754: 0x8c82008c  lw          $v0, 0x8C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x397758u;
    // 0x397758: 0x0  nop
    ctx->pc = 0x397758u;
    // NOP
    // 0x39775c: 0x0  nop
    ctx->pc = 0x39775cu;
    // NOP
}
