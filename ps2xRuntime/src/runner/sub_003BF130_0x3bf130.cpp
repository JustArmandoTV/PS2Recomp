#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003BF130
// Address: 0x3bf130 - 0x3bf140
void sub_003BF130_0x3bf130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BF130_0x3bf130");
#endif

    ctx->pc = 0x3bf130u;

    // 0x3bf130: 0x3e00008  jr          $ra
    ctx->pc = 0x3BF130u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BF134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BF130u;
            // 0x3bf134: 0x94820050  lhu         $v0, 0x50($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3BF138u;
    // 0x3bf138: 0x0  nop
    ctx->pc = 0x3bf138u;
    // NOP
    // 0x3bf13c: 0x0  nop
    ctx->pc = 0x3bf13cu;
    // NOP
}
