#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0033BF10
// Address: 0x33bf10 - 0x33bf20
void sub_0033BF10_0x33bf10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033BF10_0x33bf10");
#endif

    ctx->pc = 0x33bf10u;

    // 0x33bf10: 0x3e00008  jr          $ra
    ctx->pc = 0x33BF10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33BF14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33BF10u;
            // 0x33bf14: 0x248203e0  addiu       $v0, $a0, 0x3E0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 992));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33BF18u;
    // 0x33bf18: 0x0  nop
    ctx->pc = 0x33bf18u;
    // NOP
    // 0x33bf1c: 0x0  nop
    ctx->pc = 0x33bf1cu;
    // NOP
}
