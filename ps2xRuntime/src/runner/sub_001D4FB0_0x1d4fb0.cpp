#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D4FB0
// Address: 0x1d4fb0 - 0x1d4fc0
void sub_001D4FB0_0x1d4fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D4FB0_0x1d4fb0");
#endif

    ctx->pc = 0x1d4fb0u;

    // 0x1d4fb0: 0xa48500a4  sh          $a1, 0xA4($a0)
    ctx->pc = 0x1d4fb0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 164), (uint16_t)GPR_U32(ctx, 5));
    // 0x1d4fb4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D4FB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4FB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4FB4u;
            // 0x1d4fb8: 0xa4850050  sh          $a1, 0x50($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 80), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D4FBCu;
    // 0x1d4fbc: 0x0  nop
    ctx->pc = 0x1d4fbcu;
    // NOP
}
