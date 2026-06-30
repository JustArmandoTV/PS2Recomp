#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003E5670
// Address: 0x3e5670 - 0x3e5680
void sub_003E5670_0x3e5670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E5670_0x3e5670");
#endif

    ctx->pc = 0x3e5670u;

    // 0x3e5670: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3e5670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e5674: 0x3e00008  jr          $ra
    ctx->pc = 0x3E5674u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E5678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5674u;
            // 0x3e5678: 0xa08301bc  sb          $v1, 0x1BC($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 444), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E567Cu;
    // 0x3e567c: 0x0  nop
    ctx->pc = 0x3e567cu;
    // NOP
}
