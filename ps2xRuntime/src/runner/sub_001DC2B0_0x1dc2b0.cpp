#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DC2B0
// Address: 0x1dc2b0 - 0x1dc2c0
void sub_001DC2B0_0x1dc2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DC2B0_0x1dc2b0");
#endif

    ctx->pc = 0x1dc2b0u;

    // 0x1dc2b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC2B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC2B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC2B0u;
            // 0x1dc2b4: 0xa08511a7  sb          $a1, 0x11A7($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 4519), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DC2B8u;
    // 0x1dc2b8: 0x0  nop
    ctx->pc = 0x1dc2b8u;
    // NOP
    // 0x1dc2bc: 0x0  nop
    ctx->pc = 0x1dc2bcu;
    // NOP
}
