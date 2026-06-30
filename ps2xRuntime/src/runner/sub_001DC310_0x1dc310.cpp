#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DC310
// Address: 0x1dc310 - 0x1dc320
void sub_001DC310_0x1dc310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DC310_0x1dc310");
#endif

    ctx->pc = 0x1dc310u;

    // 0x1dc310: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC310u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC310u;
            // 0x1dc314: 0xa485119c  sh          $a1, 0x119C($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 4508), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DC318u;
    // 0x1dc318: 0x0  nop
    ctx->pc = 0x1dc318u;
    // NOP
    // 0x1dc31c: 0x0  nop
    ctx->pc = 0x1dc31cu;
    // NOP
}
