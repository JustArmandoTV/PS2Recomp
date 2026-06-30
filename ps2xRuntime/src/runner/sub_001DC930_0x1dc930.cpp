#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DC930
// Address: 0x1dc930 - 0x1dc940
void sub_001DC930_0x1dc930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DC930_0x1dc930");
#endif

    ctx->pc = 0x1dc930u;

    // 0x1dc930: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC930u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC930u;
            // 0x1dc934: 0x24820ab0  addiu       $v0, $a0, 0xAB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2736));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DC938u;
    // 0x1dc938: 0x0  nop
    ctx->pc = 0x1dc938u;
    // NOP
    // 0x1dc93c: 0x0  nop
    ctx->pc = 0x1dc93cu;
    // NOP
}
