#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0034AB20
// Address: 0x34ab20 - 0x34ab30
void sub_0034AB20_0x34ab20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034AB20_0x34ab20");
#endif

    ctx->pc = 0x34ab20u;

    // 0x34ab20: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x34ab20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x34ab24: 0x3e00008  jr          $ra
    ctx->pc = 0x34AB24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34AB28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34AB24u;
            // 0x34ab28: 0x8c427558  lw          $v0, 0x7558($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30040)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34AB2Cu;
    // 0x34ab2c: 0x0  nop
    ctx->pc = 0x34ab2cu;
    // NOP
}
