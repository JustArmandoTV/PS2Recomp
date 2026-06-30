#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00384430
// Address: 0x384430 - 0x384440
void sub_00384430_0x384430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00384430_0x384430");
#endif

    ctx->pc = 0x384430u;

    // 0x384430: 0x3e00008  jr          $ra
    ctx->pc = 0x384430u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x384434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x384430u;
            // 0x384434: 0x24820330  addiu       $v0, $a0, 0x330 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 816));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x384438u;
    // 0x384438: 0x0  nop
    ctx->pc = 0x384438u;
    // NOP
    // 0x38443c: 0x0  nop
    ctx->pc = 0x38443cu;
    // NOP
}
