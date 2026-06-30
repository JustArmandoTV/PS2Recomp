#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DCC70
// Address: 0x1dcc70 - 0x1dcc80
void sub_001DCC70_0x1dcc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DCC70_0x1dcc70");
#endif

    ctx->pc = 0x1dcc70u;

    // 0x1dcc70: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCC70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCC74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCC70u;
            // 0x1dcc74: 0x8c820d60  lw          $v0, 0xD60($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3424)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DCC78u;
    // 0x1dcc78: 0x0  nop
    ctx->pc = 0x1dcc78u;
    // NOP
    // 0x1dcc7c: 0x0  nop
    ctx->pc = 0x1dcc7cu;
    // NOP
}
