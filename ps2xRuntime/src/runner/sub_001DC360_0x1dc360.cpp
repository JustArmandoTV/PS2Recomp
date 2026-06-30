#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DC360
// Address: 0x1dc360 - 0x1dc370
void sub_001DC360_0x1dc360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DC360_0x1dc360");
#endif

    ctx->pc = 0x1dc360u;

    // 0x1dc360: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC360u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC360u;
            // 0x1dc364: 0x8c82012c  lw          $v0, 0x12C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 300)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DC368u;
    // 0x1dc368: 0x0  nop
    ctx->pc = 0x1dc368u;
    // NOP
    // 0x1dc36c: 0x0  nop
    ctx->pc = 0x1dc36cu;
    // NOP
}
