#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0053D910
// Address: 0x53d910 - 0x53d920
void sub_0053D910_0x53d910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0053D910_0x53d910");
#endif

    ctx->pc = 0x53d910u;

    // 0x53d910: 0x8c830068  lw          $v1, 0x68($a0)
    ctx->pc = 0x53d910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x53d914: 0x3e00008  jr          $ra
    ctx->pc = 0x53D914u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53D918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53D914u;
            // 0x53d918: 0xac830070  sw          $v1, 0x70($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53D91Cu;
    // 0x53d91c: 0x0  nop
    ctx->pc = 0x53d91cu;
    // NOP
}
