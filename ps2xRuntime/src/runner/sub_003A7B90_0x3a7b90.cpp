#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003A7B90
// Address: 0x3a7b90 - 0x3a7bb0
void sub_003A7B90_0x3a7b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A7B90_0x3a7b90");
#endif

    ctx->pc = 0x3a7b90u;

    // 0x3a7b90: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x3a7b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x3a7b94: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x3a7b94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3a7b98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3a7b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3a7b9c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A7B9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A7BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A7B9Cu;
            // 0x3a7ba0: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A7BA4u;
    // 0x3a7ba4: 0x0  nop
    ctx->pc = 0x3a7ba4u;
    // NOP
    // 0x3a7ba8: 0x0  nop
    ctx->pc = 0x3a7ba8u;
    // NOP
    // 0x3a7bac: 0x0  nop
    ctx->pc = 0x3a7bacu;
    // NOP
}
