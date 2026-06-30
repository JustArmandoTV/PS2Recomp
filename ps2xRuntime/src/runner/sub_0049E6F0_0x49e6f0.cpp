#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0049E6F0
// Address: 0x49e6f0 - 0x49e700
void sub_0049E6F0_0x49e6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049E6F0_0x49e6f0");
#endif

    ctx->pc = 0x49e6f0u;

    // 0x49e6f0: 0x3e00008  jr          $ra
    ctx->pc = 0x49E6F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49E6F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49E6F0u;
            // 0x49e6f4: 0x8c820054  lw          $v0, 0x54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49E6F8u;
    // 0x49e6f8: 0x0  nop
    ctx->pc = 0x49e6f8u;
    // NOP
    // 0x49e6fc: 0x0  nop
    ctx->pc = 0x49e6fcu;
    // NOP
}
