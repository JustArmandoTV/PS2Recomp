#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016D460
// Address: 0x16d460 - 0x16d470
void sub_0016D460_0x16d460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016D460_0x16d460");
#endif

    ctx->pc = 0x16d460u;

    // 0x16d460: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x16d460u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x16d464: 0x3e00008  jr          $ra
    ctx->pc = 0x16D464u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D464u;
            // 0x16d468: 0x8c62aa38  lw          $v0, -0x55C8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945336)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16D46Cu;
    // 0x16d46c: 0x0  nop
    ctx->pc = 0x16d46cu;
    // NOP
}
