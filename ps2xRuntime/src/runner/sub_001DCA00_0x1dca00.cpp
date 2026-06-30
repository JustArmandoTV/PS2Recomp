#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DCA00
// Address: 0x1dca00 - 0x1dca10
void sub_001DCA00_0x1dca00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DCA00_0x1dca00");
#endif

    ctx->pc = 0x1dca00u;

    // 0x1dca00: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCA00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCA04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCA00u;
            // 0x1dca04: 0x24820560  addiu       $v0, $a0, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1376));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DCA08u;
    // 0x1dca08: 0x0  nop
    ctx->pc = 0x1dca08u;
    // NOP
    // 0x1dca0c: 0x0  nop
    ctx->pc = 0x1dca0cu;
    // NOP
}
