#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0033BFE0
// Address: 0x33bfe0 - 0x33c000
void sub_0033BFE0_0x33bfe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033BFE0_0x33bfe0");
#endif

    ctx->pc = 0x33bfe0u;

    // 0x33bfe0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x33bfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x33bfe4: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x33bfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x33bfe8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x33bfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x33bfec: 0x3e00008  jr          $ra
    ctx->pc = 0x33BFECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33BFF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33BFECu;
            // 0x33bff0: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33BFF4u;
    // 0x33bff4: 0x0  nop
    ctx->pc = 0x33bff4u;
    // NOP
    // 0x33bff8: 0x0  nop
    ctx->pc = 0x33bff8u;
    // NOP
    // 0x33bffc: 0x0  nop
    ctx->pc = 0x33bffcu;
    // NOP
}
