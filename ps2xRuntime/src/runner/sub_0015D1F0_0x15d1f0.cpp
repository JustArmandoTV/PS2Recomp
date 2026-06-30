#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015D1F0
// Address: 0x15d1f0 - 0x15d200
void sub_0015D1F0_0x15d1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015D1F0_0x15d1f0");
#endif

    ctx->pc = 0x15d1f0u;

    // 0x15d1f0: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x15d1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x15d1f4: 0x3e00008  jr          $ra
    ctx->pc = 0x15D1F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D1F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D1F4u;
            // 0x15d1f8: 0xac64ce30  sw          $a0, -0x31D0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954544), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15D1FCu;
    // 0x15d1fc: 0x0  nop
    ctx->pc = 0x15d1fcu;
    // NOP
}
