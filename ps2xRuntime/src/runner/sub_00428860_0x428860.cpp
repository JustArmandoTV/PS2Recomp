#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00428860
// Address: 0x428860 - 0x428870
void sub_00428860_0x428860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00428860_0x428860");
#endif

    ctx->pc = 0x428860u;

    // 0x428860: 0x3e00008  jr          $ra
    ctx->pc = 0x428860u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x428864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x428860u;
            // 0x428864: 0x8c820170  lw          $v0, 0x170($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 368)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x428868u;
    // 0x428868: 0x0  nop
    ctx->pc = 0x428868u;
    // NOP
    // 0x42886c: 0x0  nop
    ctx->pc = 0x42886cu;
    // NOP
}
