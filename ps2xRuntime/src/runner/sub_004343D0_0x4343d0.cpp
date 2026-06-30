#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004343D0
// Address: 0x4343d0 - 0x4343f0
void sub_004343D0_0x4343d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004343D0_0x4343d0");
#endif

    ctx->pc = 0x4343d0u;

    // 0x4343d0: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x4343d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x4343d4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x4343d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x4343d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4343d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4343dc: 0x3e00008  jr          $ra
    ctx->pc = 0x4343DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4343E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4343DCu;
            // 0x4343e0: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4343E4u;
    // 0x4343e4: 0x0  nop
    ctx->pc = 0x4343e4u;
    // NOP
    // 0x4343e8: 0x0  nop
    ctx->pc = 0x4343e8u;
    // NOP
    // 0x4343ec: 0x0  nop
    ctx->pc = 0x4343ecu;
    // NOP
}
