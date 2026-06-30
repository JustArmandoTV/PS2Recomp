#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F3CE0
// Address: 0x2f3ce0 - 0x2f3cf0
void sub_002F3CE0_0x2f3ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F3CE0_0x2f3ce0");
#endif

    ctx->pc = 0x2f3ce0u;

    // 0x2f3ce0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F3CE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F3CE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3CE0u;
            // 0x2f3ce4: 0x8c820038  lw          $v0, 0x38($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F3CE8u;
    // 0x2f3ce8: 0x0  nop
    ctx->pc = 0x2f3ce8u;
    // NOP
    // 0x2f3cec: 0x0  nop
    ctx->pc = 0x2f3cecu;
    // NOP
}
