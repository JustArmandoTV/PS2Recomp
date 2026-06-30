#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00348D00
// Address: 0x348d00 - 0x348d10
void sub_00348D00_0x348d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00348D00_0x348d00");
#endif

    ctx->pc = 0x348d00u;

    // 0x348d00: 0x3e00008  jr          $ra
    ctx->pc = 0x348D00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x348D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x348D00u;
            // 0x348d04: 0x24820134  addiu       $v0, $a0, 0x134 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 308));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x348D08u;
    // 0x348d08: 0x0  nop
    ctx->pc = 0x348d08u;
    // NOP
    // 0x348d0c: 0x0  nop
    ctx->pc = 0x348d0cu;
    // NOP
}
