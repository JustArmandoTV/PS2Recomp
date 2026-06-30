#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004CBC30
// Address: 0x4cbc30 - 0x4cbc40
void sub_004CBC30_0x4cbc30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CBC30_0x4cbc30");
#endif

    ctx->pc = 0x4cbc30u;

    // 0x4cbc30: 0x8c830074  lw          $v1, 0x74($a0)
    ctx->pc = 0x4cbc30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x4cbc34: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4cbc34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4cbc38: 0x3e00008  jr          $ra
    ctx->pc = 0x4CBC38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CBC3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CBC38u;
            // 0x4cbc3c: 0xa0600058  sb          $zero, 0x58($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 88), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CBC40u;
}
