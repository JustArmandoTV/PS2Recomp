#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DB360
// Address: 0x2db360 - 0x2db370
void sub_002DB360_0x2db360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB360_0x2db360");
#endif

    ctx->pc = 0x2db360u;

    // 0x2db360: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB360u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB360u;
            // 0x2db364: 0x8c82001c  lw          $v0, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DB368u;
    // 0x2db368: 0x0  nop
    ctx->pc = 0x2db368u;
    // NOP
    // 0x2db36c: 0x0  nop
    ctx->pc = 0x2db36cu;
    // NOP
}
