#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DD6E0
// Address: 0x1dd6e0 - 0x1dd6f0
void sub_001DD6E0_0x1dd6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DD6E0_0x1dd6e0");
#endif

    ctx->pc = 0x1dd6e0u;

    // 0x1dd6e0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1dd6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1dd6e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD6E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD6E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD6E4u;
            // 0x1dd6e8: 0x8c428a08  lw          $v0, -0x75F8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DD6ECu;
    // 0x1dd6ec: 0x0  nop
    ctx->pc = 0x1dd6ecu;
    // NOP
}
