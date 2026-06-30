#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DB4E0
// Address: 0x2db4e0 - 0x2db500
void sub_002DB4E0_0x2db4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB4E0_0x2db4e0");
#endif

    ctx->pc = 0x2db4e0u;

    // 0x2db4e0: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x2db4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2db4e4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2db4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2db4e8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2db4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2db4ec: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2db4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2db4f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB4F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB4F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB4F0u;
            // 0x2db4f4: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DB4F8u;
    // 0x2db4f8: 0x0  nop
    ctx->pc = 0x2db4f8u;
    // NOP
    // 0x2db4fc: 0x0  nop
    ctx->pc = 0x2db4fcu;
    // NOP
}
