#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004CA1D0
// Address: 0x4ca1d0 - 0x4ca1e0
void sub_004CA1D0_0x4ca1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CA1D0_0x4ca1d0");
#endif

    ctx->pc = 0x4ca1d0u;

    // 0x4ca1d0: 0x3e00008  jr          $ra
    ctx->pc = 0x4CA1D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CA1D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CA1D0u;
            // 0x4ca1d4: 0xac8500c4  sw          $a1, 0xC4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 196), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CA1D8u;
    // 0x4ca1d8: 0x0  nop
    ctx->pc = 0x4ca1d8u;
    // NOP
    // 0x4ca1dc: 0x0  nop
    ctx->pc = 0x4ca1dcu;
    // NOP
}
