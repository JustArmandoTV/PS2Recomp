#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0035EE60
// Address: 0x35ee60 - 0x35ee70
void sub_0035EE60_0x35ee60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035EE60_0x35ee60");
#endif

    ctx->pc = 0x35ee60u;

    // 0x35ee60: 0x3e00008  jr          $ra
    ctx->pc = 0x35EE60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35EE64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35EE60u;
            // 0x35ee64: 0x24820814  addiu       $v0, $a0, 0x814 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2068));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35EE68u;
    // 0x35ee68: 0x0  nop
    ctx->pc = 0x35ee68u;
    // NOP
    // 0x35ee6c: 0x0  nop
    ctx->pc = 0x35ee6cu;
    // NOP
}
