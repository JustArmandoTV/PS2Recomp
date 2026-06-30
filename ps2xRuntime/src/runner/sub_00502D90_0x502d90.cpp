#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00502D90
// Address: 0x502d90 - 0x502da0
void sub_00502D90_0x502d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00502D90_0x502d90");
#endif

    ctx->pc = 0x502d90u;

    // 0x502d90: 0x3e00008  jr          $ra
    ctx->pc = 0x502D90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x502D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x502D90u;
            // 0x502d94: 0x24820084  addiu       $v0, $a0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 132));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x502D98u;
    // 0x502d98: 0x0  nop
    ctx->pc = 0x502d98u;
    // NOP
    // 0x502d9c: 0x0  nop
    ctx->pc = 0x502d9cu;
    // NOP
}
