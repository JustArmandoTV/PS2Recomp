#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00497E70
// Address: 0x497e70 - 0x497e80
void sub_00497E70_0x497e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00497E70_0x497e70");
#endif

    ctx->pc = 0x497e70u;

    // 0x497e70: 0x3e00008  jr          $ra
    ctx->pc = 0x497E70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x497E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x497E70u;
            // 0x497e74: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x497E78u;
    // 0x497e78: 0x0  nop
    ctx->pc = 0x497e78u;
    // NOP
    // 0x497e7c: 0x0  nop
    ctx->pc = 0x497e7cu;
    // NOP
}
