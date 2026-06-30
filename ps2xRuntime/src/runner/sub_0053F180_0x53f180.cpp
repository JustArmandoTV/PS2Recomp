#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0053F180
// Address: 0x53f180 - 0x53f190
void sub_0053F180_0x53f180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0053F180_0x53f180");
#endif

    ctx->pc = 0x53f180u;

    // 0x53f180: 0x3e00008  jr          $ra
    ctx->pc = 0x53F180u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53F184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53F180u;
            // 0x53f184: 0x24820008  addiu       $v0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53F188u;
    // 0x53f188: 0x0  nop
    ctx->pc = 0x53f188u;
    // NOP
    // 0x53f18c: 0x0  nop
    ctx->pc = 0x53f18cu;
    // NOP
}
