#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DC490
// Address: 0x1dc490 - 0x1dc4a0
void sub_001DC490_0x1dc490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DC490_0x1dc490");
#endif

    ctx->pc = 0x1dc490u;

    // 0x1dc490: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC490u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC490u;
            // 0x1dc494: 0x8c820028  lw          $v0, 0x28($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DC498u;
    // 0x1dc498: 0x0  nop
    ctx->pc = 0x1dc498u;
    // NOP
    // 0x1dc49c: 0x0  nop
    ctx->pc = 0x1dc49cu;
    // NOP
}
