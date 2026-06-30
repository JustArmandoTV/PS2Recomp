#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00109D98
// Address: 0x109d98 - 0x109da8
void sub_00109D98_0x109d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00109D98_0x109d98");
#endif

    ctx->pc = 0x109d98u;

    // 0x109d98: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x109d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x109d9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x109d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x109da0: 0x3e00008  jr          $ra
    ctx->pc = 0x109DA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x109DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109DA0u;
            // 0x109da4: 0xac620878  sw          $v0, 0x878($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 2168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x109DA8u;
}
