#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003E5630
// Address: 0x3e5630 - 0x3e5640
void sub_003E5630_0x3e5630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E5630_0x3e5630");
#endif

    ctx->pc = 0x3e5630u;

    // 0x3e5630: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e5630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3e5634: 0x3e00008  jr          $ra
    ctx->pc = 0x3E5634u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E5638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E5634u;
            // 0x3e5638: 0x8c426ec0  lw          $v0, 0x6EC0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28352)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E563Cu;
    // 0x3e563c: 0x0  nop
    ctx->pc = 0x3e563cu;
    // NOP
}
