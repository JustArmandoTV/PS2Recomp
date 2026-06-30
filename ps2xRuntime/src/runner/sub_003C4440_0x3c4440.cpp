#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003C4440
// Address: 0x3c4440 - 0x3c4450
void sub_003C4440_0x3c4440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C4440_0x3c4440");
#endif

    ctx->pc = 0x3c4440u;

    // 0x3c4440: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3c4440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x3c4444: 0x3e00008  jr          $ra
    ctx->pc = 0x3C4444u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C4448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4444u;
            // 0x3c4448: 0x8c4289e0  lw          $v0, -0x7620($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C444Cu;
    // 0x3c444c: 0x0  nop
    ctx->pc = 0x3c444cu;
    // NOP
}
