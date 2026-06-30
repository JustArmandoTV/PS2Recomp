#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003E05D0
// Address: 0x3e05d0 - 0x3e05e0
void sub_003E05D0_0x3e05d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E05D0_0x3e05d0");
#endif

    ctx->pc = 0x3e05d0u;

    // 0x3e05d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3E05D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E05D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E05D0u;
            // 0x3e05d4: 0x8c8202d4  lw          $v0, 0x2D4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 724)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E05D8u;
    // 0x3e05d8: 0x0  nop
    ctx->pc = 0x3e05d8u;
    // NOP
    // 0x3e05dc: 0x0  nop
    ctx->pc = 0x3e05dcu;
    // NOP
}
