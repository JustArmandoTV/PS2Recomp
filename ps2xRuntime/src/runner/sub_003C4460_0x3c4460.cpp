#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003C4460
// Address: 0x3c4460 - 0x3c4470
void sub_003C4460_0x3c4460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C4460_0x3c4460");
#endif

    ctx->pc = 0x3c4460u;

    // 0x3c4460: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3c4460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x3c4464: 0x3e00008  jr          $ra
    ctx->pc = 0x3C4464u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C4468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C4464u;
            // 0x3c4468: 0x8c4289d8  lw          $v0, -0x7628($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937048)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C446Cu;
    // 0x3c446c: 0x0  nop
    ctx->pc = 0x3c446cu;
    // NOP
}
