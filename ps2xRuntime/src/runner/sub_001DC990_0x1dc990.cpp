#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DC990
// Address: 0x1dc990 - 0x1dc9a0
void sub_001DC990_0x1dc990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DC990_0x1dc990");
#endif

    ctx->pc = 0x1dc990u;

    // 0x1dc990: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC990u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC990u;
            // 0x1dc994: 0x248202c0  addiu       $v0, $a0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 704));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DC998u;
    // 0x1dc998: 0x0  nop
    ctx->pc = 0x1dc998u;
    // NOP
    // 0x1dc99c: 0x0  nop
    ctx->pc = 0x1dc99cu;
    // NOP
}
