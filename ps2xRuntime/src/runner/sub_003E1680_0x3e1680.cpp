#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003E1680
// Address: 0x3e1680 - 0x3e1690
void sub_003E1680_0x3e1680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E1680_0x3e1680");
#endif

    ctx->pc = 0x3e1680u;

    // 0x3e1680: 0x3e00008  jr          $ra
    ctx->pc = 0x3E1680u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E1684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E1680u;
            // 0x3e1684: 0x248205a4  addiu       $v0, $a0, 0x5A4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1444));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E1688u;
    // 0x3e1688: 0x0  nop
    ctx->pc = 0x3e1688u;
    // NOP
    // 0x3e168c: 0x0  nop
    ctx->pc = 0x3e168cu;
    // NOP
}
