#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003E1720
// Address: 0x3e1720 - 0x3e1730
void sub_003E1720_0x3e1720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E1720_0x3e1720");
#endif

    ctx->pc = 0x3e1720u;

    // 0x3e1720: 0x3e00008  jr          $ra
    ctx->pc = 0x3E1720u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E1724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E1720u;
            // 0x3e1724: 0xac850068  sw          $a1, 0x68($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E1728u;
    // 0x3e1728: 0x0  nop
    ctx->pc = 0x3e1728u;
    // NOP
    // 0x3e172c: 0x0  nop
    ctx->pc = 0x3e172cu;
    // NOP
}
