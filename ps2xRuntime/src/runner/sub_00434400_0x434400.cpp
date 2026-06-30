#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00434400
// Address: 0x434400 - 0x434410
void sub_00434400_0x434400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00434400_0x434400");
#endif

    ctx->pc = 0x434400u;

    // 0x434400: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x434400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x434404: 0x3e00008  jr          $ra
    ctx->pc = 0x434404u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x434408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x434404u;
            // 0x434408: 0x8c423da0  lw          $v0, 0x3DA0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15776)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43440Cu;
    // 0x43440c: 0x0  nop
    ctx->pc = 0x43440cu;
    // NOP
}
