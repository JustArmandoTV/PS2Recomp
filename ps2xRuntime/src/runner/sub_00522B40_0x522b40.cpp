#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00522B40
// Address: 0x522b40 - 0x522b50
void sub_00522B40_0x522b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00522B40_0x522b40");
#endif

    ctx->pc = 0x522b40u;

    // 0x522b40: 0x3e00008  jr          $ra
    ctx->pc = 0x522B40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x522B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x522B40u;
            // 0x522b44: 0x24820084  addiu       $v0, $a0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 132));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x522B48u;
    // 0x522b48: 0x0  nop
    ctx->pc = 0x522b48u;
    // NOP
    // 0x522b4c: 0x0  nop
    ctx->pc = 0x522b4cu;
    // NOP
}
