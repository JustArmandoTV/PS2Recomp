#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BCE00
// Address: 0x2bce00 - 0x2bce10
void sub_002BCE00_0x2bce00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BCE00_0x2bce00");
#endif

    ctx->pc = 0x2bce00u;

    // 0x2bce00: 0x3e00008  jr          $ra
    ctx->pc = 0x2BCE00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BCE04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BCE00u;
            // 0x2bce04: 0x24820084  addiu       $v0, $a0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 132));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BCE08u;
    // 0x2bce08: 0x0  nop
    ctx->pc = 0x2bce08u;
    // NOP
    // 0x2bce0c: 0x0  nop
    ctx->pc = 0x2bce0cu;
    // NOP
}
