#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DD6B0
// Address: 0x1dd6b0 - 0x1dd6c0
void sub_001DD6B0_0x1dd6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DD6B0_0x1dd6b0");
#endif

    ctx->pc = 0x1dd6b0u;

    // 0x1dd6b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD6B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD6B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD6B0u;
            // 0x1dd6b4: 0x8c820084  lw          $v0, 0x84($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DD6B8u;
    // 0x1dd6b8: 0x0  nop
    ctx->pc = 0x1dd6b8u;
    // NOP
    // 0x1dd6bc: 0x0  nop
    ctx->pc = 0x1dd6bcu;
    // NOP
}
