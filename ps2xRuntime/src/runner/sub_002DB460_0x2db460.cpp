#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DB460
// Address: 0x2db460 - 0x2db470
void sub_002DB460_0x2db460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB460_0x2db460");
#endif

    ctx->pc = 0x2db460u;

    // 0x2db460: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB460u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB460u;
            // 0x2db464: 0x24820390  addiu       $v0, $a0, 0x390 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 912));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DB468u;
    // 0x2db468: 0x0  nop
    ctx->pc = 0x2db468u;
    // NOP
    // 0x2db46c: 0x0  nop
    ctx->pc = 0x2db46cu;
    // NOP
}
