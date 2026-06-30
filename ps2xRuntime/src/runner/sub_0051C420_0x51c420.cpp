#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0051C420
// Address: 0x51c420 - 0x51c430
void sub_0051C420_0x51c420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0051C420_0x51c420");
#endif

    ctx->pc = 0x51c420u;

    // 0x51c420: 0x3e00008  jr          $ra
    ctx->pc = 0x51C420u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51C424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51C420u;
            // 0x51c424: 0xac850004  sw          $a1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51C428u;
    // 0x51c428: 0x0  nop
    ctx->pc = 0x51c428u;
    // NOP
    // 0x51c42c: 0x0  nop
    ctx->pc = 0x51c42cu;
    // NOP
}
