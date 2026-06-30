#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0051EA20
// Address: 0x51ea20 - 0x51ea30
void sub_0051EA20_0x51ea20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0051EA20_0x51ea20");
#endif

    ctx->pc = 0x51ea20u;

    // 0x51ea20: 0x3e00008  jr          $ra
    ctx->pc = 0x51EA20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51EA24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51EA20u;
            // 0x51ea24: 0x8c8201c4  lw          $v0, 0x1C4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 452)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51EA28u;
    // 0x51ea28: 0x0  nop
    ctx->pc = 0x51ea28u;
    // NOP
    // 0x51ea2c: 0x0  nop
    ctx->pc = 0x51ea2cu;
    // NOP
}
