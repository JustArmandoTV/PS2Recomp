#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F3CD0
// Address: 0x2f3cd0 - 0x2f3ce0
void sub_002F3CD0_0x2f3cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F3CD0_0x2f3cd0");
#endif

    ctx->pc = 0x2f3cd0u;

    // 0x2f3cd0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2f3cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x2f3cd4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F3CD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F3CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3CD4u;
            // 0x2f3cd8: 0x8c4289e0  lw          $v0, -0x7620($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F3CDCu;
    // 0x2f3cdc: 0x0  nop
    ctx->pc = 0x2f3cdcu;
    // NOP
}
