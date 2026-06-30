#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003E05E0
// Address: 0x3e05e0 - 0x3e0600
void sub_003E05E0_0x3e05e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E05E0_0x3e05e0");
#endif

    ctx->pc = 0x3e05e0u;

    // 0x3e05e0: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x3e05e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x3e05e4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x3e05e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3e05e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3e05e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3e05ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3E05ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E05F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E05ECu;
            // 0x3e05f0: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E05F4u;
    // 0x3e05f4: 0x0  nop
    ctx->pc = 0x3e05f4u;
    // NOP
    // 0x3e05f8: 0x0  nop
    ctx->pc = 0x3e05f8u;
    // NOP
    // 0x3e05fc: 0x0  nop
    ctx->pc = 0x3e05fcu;
    // NOP
}
