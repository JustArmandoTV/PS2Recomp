#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003A4BC0
// Address: 0x3a4bc0 - 0x3a4bd0
void sub_003A4BC0_0x3a4bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A4BC0_0x3a4bc0");
#endif

    ctx->pc = 0x3a4bc0u;

    // 0x3a4bc0: 0x3e00008  jr          $ra
    ctx->pc = 0x3A4BC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A4BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A4BC0u;
            // 0x3a4bc4: 0x808211ab  lb          $v0, 0x11AB($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4523)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A4BC8u;
    // 0x3a4bc8: 0x0  nop
    ctx->pc = 0x3a4bc8u;
    // NOP
    // 0x3a4bcc: 0x0  nop
    ctx->pc = 0x3a4bccu;
    // NOP
}
