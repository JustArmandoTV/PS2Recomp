#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0049E6E0
// Address: 0x49e6e0 - 0x49e6f0
void sub_0049E6E0_0x49e6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049E6E0_0x49e6e0");
#endif

    ctx->pc = 0x49e6e0u;

    // 0x49e6e0: 0x3e00008  jr          $ra
    ctx->pc = 0x49E6E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49E6E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49E6E0u;
            // 0x49e6e4: 0xac850054  sw          $a1, 0x54($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49E6E8u;
    // 0x49e6e8: 0x0  nop
    ctx->pc = 0x49e6e8u;
    // NOP
    // 0x49e6ec: 0x0  nop
    ctx->pc = 0x49e6ecu;
    // NOP
}
