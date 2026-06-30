#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DC910
// Address: 0x1dc910 - 0x1dc920
void sub_001DC910_0x1dc910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DC910_0x1dc910");
#endif

    ctx->pc = 0x1dc910u;

    // 0x1dc910: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC910u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC910u;
            // 0x1dc914: 0x8c820030  lw          $v0, 0x30($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DC918u;
    // 0x1dc918: 0x0  nop
    ctx->pc = 0x1dc918u;
    // NOP
    // 0x1dc91c: 0x0  nop
    ctx->pc = 0x1dc91cu;
    // NOP
}
