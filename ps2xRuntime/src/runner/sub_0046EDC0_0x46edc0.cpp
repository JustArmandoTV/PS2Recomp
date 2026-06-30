#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0046EDC0
// Address: 0x46edc0 - 0x46edd0
void sub_0046EDC0_0x46edc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046EDC0_0x46edc0");
#endif

    ctx->pc = 0x46edc0u;

    // 0x46edc0: 0x3e00008  jr          $ra
    ctx->pc = 0x46EDC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46EDC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46EDC0u;
            // 0x46edc4: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x46EDC8u;
    // 0x46edc8: 0x0  nop
    ctx->pc = 0x46edc8u;
    // NOP
    // 0x46edcc: 0x0  nop
    ctx->pc = 0x46edccu;
    // NOP
}
