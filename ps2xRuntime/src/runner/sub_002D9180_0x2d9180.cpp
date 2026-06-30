#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D9180
// Address: 0x2d9180 - 0x2d9190
void sub_002D9180_0x2d9180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D9180_0x2d9180");
#endif

    ctx->pc = 0x2d9180u;

    // 0x2d9180: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9180u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9180u;
            // 0x2d9184: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D9188u;
    // 0x2d9188: 0x0  nop
    ctx->pc = 0x2d9188u;
    // NOP
    // 0x2d918c: 0x0  nop
    ctx->pc = 0x2d918cu;
    // NOP
}
