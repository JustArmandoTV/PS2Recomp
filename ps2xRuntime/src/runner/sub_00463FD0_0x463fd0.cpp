#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00463FD0
// Address: 0x463fd0 - 0x463fe0
void sub_00463FD0_0x463fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00463FD0_0x463fd0");
#endif

    ctx->pc = 0x463fd0u;

    // 0x463fd0: 0x3e00008  jr          $ra
    ctx->pc = 0x463FD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x463FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x463FD0u;
            // 0x463fd4: 0xac8500d4  sw          $a1, 0xD4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x463FD8u;
    // 0x463fd8: 0x0  nop
    ctx->pc = 0x463fd8u;
    // NOP
    // 0x463fdc: 0x0  nop
    ctx->pc = 0x463fdcu;
    // NOP
}
