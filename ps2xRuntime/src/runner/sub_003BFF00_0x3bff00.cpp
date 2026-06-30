#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003BFF00
// Address: 0x3bff00 - 0x3bff10
void sub_003BFF00_0x3bff00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BFF00_0x3bff00");
#endif

    ctx->pc = 0x3bff00u;

    // 0x3bff00: 0x3e00008  jr          $ra
    ctx->pc = 0x3BFF00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BFF04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BFF00u;
            // 0x3bff04: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3BFF08u;
    // 0x3bff08: 0x0  nop
    ctx->pc = 0x3bff08u;
    // NOP
    // 0x3bff0c: 0x0  nop
    ctx->pc = 0x3bff0cu;
    // NOP
}
