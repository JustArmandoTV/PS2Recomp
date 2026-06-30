#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DCD30
// Address: 0x1dcd30 - 0x1dcd40
void sub_001DCD30_0x1dcd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DCD30_0x1dcd30");
#endif

    ctx->pc = 0x1dcd30u;

    // 0x1dcd30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1dcd30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dcd34: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCD34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCD38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCD34u;
            // 0x1dcd38: 0xa0830050  sb          $v1, 0x50($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 80), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DCD3Cu;
    // 0x1dcd3c: 0x0  nop
    ctx->pc = 0x1dcd3cu;
    // NOP
}
