#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DC380
// Address: 0x1dc380 - 0x1dc390
void sub_001DC380_0x1dc380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DC380_0x1dc380");
#endif

    ctx->pc = 0x1dc380u;

    // 0x1dc380: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1dc380u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1dc384: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1dc384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1dc388: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC388u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC38Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC388u;
            // 0x1dc38c: 0x8c420058  lw          $v0, 0x58($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DC390u;
}
