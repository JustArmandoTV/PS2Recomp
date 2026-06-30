#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00510430
// Address: 0x510430 - 0x510440
void sub_00510430_0x510430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00510430_0x510430");
#endif

    ctx->pc = 0x510430u;

    // 0x510430: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x510430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x510434: 0x3e00008  jr          $ra
    ctx->pc = 0x510434u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x510438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x510434u;
            // 0x510438: 0x8c420cc8  lw          $v0, 0xCC8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3272)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51043Cu;
    // 0x51043c: 0x0  nop
    ctx->pc = 0x51043cu;
    // NOP
}
