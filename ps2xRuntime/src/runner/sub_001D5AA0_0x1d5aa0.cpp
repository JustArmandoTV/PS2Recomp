#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D5AA0
// Address: 0x1d5aa0 - 0x1d5ab0
void sub_001D5AA0_0x1d5aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D5AA0_0x1d5aa0");
#endif

    ctx->pc = 0x1d5aa0u;

    // 0x1d5aa0: 0x3c03c120  lui         $v1, 0xC120
    ctx->pc = 0x1d5aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49440 << 16));
    // 0x1d5aa4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5AA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5AA4u;
            // 0x1d5aa8: 0xac830104  sw          $v1, 0x104($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 260), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D5AACu;
    // 0x1d5aac: 0x0  nop
    ctx->pc = 0x1d5aacu;
    // NOP
}
