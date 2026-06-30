#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00500830
// Address: 0x500830 - 0x500840
void sub_00500830_0x500830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00500830_0x500830");
#endif

    ctx->pc = 0x500830u;

    // 0x500830: 0x3e00008  jr          $ra
    ctx->pc = 0x500830u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x500834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x500830u;
            // 0x500834: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x500838u;
    // 0x500838: 0x0  nop
    ctx->pc = 0x500838u;
    // NOP
    // 0x50083c: 0x0  nop
    ctx->pc = 0x50083cu;
    // NOP
}
