#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EBE60
// Address: 0x1ebe60 - 0x1ebe70
void sub_001EBE60_0x1ebe60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EBE60_0x1ebe60");
#endif

    ctx->pc = 0x1ebe60u;

    // 0x1ebe60: 0x3e00008  jr          $ra
    ctx->pc = 0x1EBE60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EBE64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBE60u;
            // 0x1ebe64: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EBE68u;
    // 0x1ebe68: 0x0  nop
    ctx->pc = 0x1ebe68u;
    // NOP
    // 0x1ebe6c: 0x0  nop
    ctx->pc = 0x1ebe6cu;
    // NOP
}
