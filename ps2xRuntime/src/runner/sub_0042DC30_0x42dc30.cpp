#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0042DC30
// Address: 0x42dc30 - 0x42dc40
void sub_0042DC30_0x42dc30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042DC30_0x42dc30");
#endif

    ctx->pc = 0x42dc30u;

    // 0x42dc30: 0x3e00008  jr          $ra
    ctx->pc = 0x42DC30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42DC34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42DC30u;
            // 0x42dc34: 0xa0851241  sb          $a1, 0x1241($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 4673), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42DC38u;
    // 0x42dc38: 0x0  nop
    ctx->pc = 0x42dc38u;
    // NOP
    // 0x42dc3c: 0x0  nop
    ctx->pc = 0x42dc3cu;
    // NOP
}
