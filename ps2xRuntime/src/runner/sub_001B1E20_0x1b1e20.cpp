#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B1E20
// Address: 0x1b1e20 - 0x1b1e30
void sub_001B1E20_0x1b1e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B1E20_0x1b1e20");
#endif

    ctx->pc = 0x1b1e20u;

    // 0x1b1e20: 0x8c832030  lw          $v1, 0x2030($a0)
    ctx->pc = 0x1b1e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8240)));
    // 0x1b1e24: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1E24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1E24u;
            // 0x1b1e28: 0x8c621158  lw          $v0, 0x1158($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4440)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B1E2Cu;
    // 0x1b1e2c: 0x0  nop
    ctx->pc = 0x1b1e2cu;
    // NOP
}
