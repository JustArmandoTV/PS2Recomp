#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AE3A0
// Address: 0x1ae3a0 - 0x1ae3b8
void sub_001AE3A0_0x1ae3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AE3A0_0x1ae3a0");
#endif

    ctx->pc = 0x1ae3a0u;

    // 0x1ae3a0: 0x8c820ab8  lw          $v0, 0xAB8($a0)
    ctx->pc = 0x1ae3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2744)));
    // 0x1ae3a4: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x1ae3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x1ae3a8: 0x8c830ab4  lw          $v1, 0xAB4($a0)
    ctx->pc = 0x1ae3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2740)));
    // 0x1ae3ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE3ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE3B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE3ACu;
            // 0x1ae3b0: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AE3B4u;
    // 0x1ae3b4: 0x0  nop
    ctx->pc = 0x1ae3b4u;
    // NOP
}
