#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DB6F0
// Address: 0x2db6f0 - 0x2db700
void sub_002DB6F0_0x2db6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB6F0_0x2db6f0");
#endif

    ctx->pc = 0x2db6f0u;

    // 0x2db6f0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2db6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2db6f4: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x2db6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2db6f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB6F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB6FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB6F8u;
            // 0x2db6fc: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DB700u;
}
