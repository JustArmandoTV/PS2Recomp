#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003BF140
// Address: 0x3bf140 - 0x3bf150
void sub_003BF140_0x3bf140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BF140_0x3bf140");
#endif

    ctx->pc = 0x3bf140u;

    // 0x3bf140: 0x3e00008  jr          $ra
    ctx->pc = 0x3BF140u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BF144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BF140u;
            // 0x3bf144: 0x248202a0  addiu       $v0, $a0, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 672));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3BF148u;
    // 0x3bf148: 0x0  nop
    ctx->pc = 0x3bf148u;
    // NOP
    // 0x3bf14c: 0x0  nop
    ctx->pc = 0x3bf14cu;
    // NOP
}
