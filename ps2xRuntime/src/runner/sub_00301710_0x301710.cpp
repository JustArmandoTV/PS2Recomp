#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00301710
// Address: 0x301710 - 0x301720
void sub_00301710_0x301710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00301710_0x301710");
#endif

    ctx->pc = 0x301710u;

    // 0x301710: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x301710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x301714: 0x3e00008  jr          $ra
    ctx->pc = 0x301714u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x301718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x301714u;
            // 0x301718: 0x8c4289e8  lw          $v0, -0x7618($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30171Cu;
    // 0x30171c: 0x0  nop
    ctx->pc = 0x30171cu;
    // NOP
}
