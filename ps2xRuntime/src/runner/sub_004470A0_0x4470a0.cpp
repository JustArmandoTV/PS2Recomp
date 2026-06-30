#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004470A0
// Address: 0x4470a0 - 0x4470b0
void sub_004470A0_0x4470a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004470A0_0x4470a0");
#endif

    ctx->pc = 0x4470a0u;

    // 0x4470a0: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x4470a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x4470a4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x4470a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x4470a8: 0x3e00008  jr          $ra
    ctx->pc = 0x4470A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4470ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4470A8u;
            // 0x4470ac: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4470B0u;
}
