#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003E4010
// Address: 0x3e4010 - 0x3e4020
void sub_003E4010_0x3e4010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E4010_0x3e4010");
#endif

    ctx->pc = 0x3e4010u;

    // 0x3e4010: 0x3e00008  jr          $ra
    ctx->pc = 0x3E4010u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E4014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E4010u;
            // 0x3e4014: 0x8c8202c4  lw          $v0, 0x2C4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 708)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E4018u;
    // 0x3e4018: 0x0  nop
    ctx->pc = 0x3e4018u;
    // NOP
    // 0x3e401c: 0x0  nop
    ctx->pc = 0x3e401cu;
    // NOP
}
