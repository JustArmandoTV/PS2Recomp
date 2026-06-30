#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DC440
// Address: 0x1dc440 - 0x1dc450
void sub_001DC440_0x1dc440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DC440_0x1dc440");
#endif

    ctx->pc = 0x1dc440u;

    // 0x1dc440: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC440u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC440u;
            // 0x1dc444: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DC448u;
    // 0x1dc448: 0x0  nop
    ctx->pc = 0x1dc448u;
    // NOP
    // 0x1dc44c: 0x0  nop
    ctx->pc = 0x1dc44cu;
    // NOP
}
