#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003C4400
// Address: 0x3c4400 - 0x3c4410
void sub_003C4400_0x3c4400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C4400_0x3c4400");
#endif

    ctx->pc = 0x3c4400u;

    // 0x3c4400: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3c4400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3c4404: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x3c4404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3c4408: 0x3e00008  jr          $ra
    ctx->pc = 0x3C4408u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C440Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4408u;
            // 0x3c440c: 0x9442002e  lhu         $v0, 0x2E($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 46)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C4410u;
}
