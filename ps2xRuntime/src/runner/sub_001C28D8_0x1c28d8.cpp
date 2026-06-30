#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C28D8
// Address: 0x1c28d8 - 0x1c28e8
void sub_001C28D8_0x1c28d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C28D8_0x1c28d8");
#endif

    ctx->pc = 0x1c28d8u;

    // 0x1c28d8: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x1c28d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x1c28dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C28DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C28E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C28DCu;
            // 0x1c28e0: 0x2442bae0  addiu       $v0, $v0, -0x4520 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949600));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C28E4u;
    // 0x1c28e4: 0x0  nop
    ctx->pc = 0x1c28e4u;
    // NOP
}
