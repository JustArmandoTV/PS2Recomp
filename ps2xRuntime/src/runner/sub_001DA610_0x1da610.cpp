#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DA610
// Address: 0x1da610 - 0x1da630
void sub_001DA610_0x1da610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DA610_0x1da610");
#endif

    ctx->pc = 0x1da610u;

    // 0x1da610: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1da610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1da614: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1da614u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1da618: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1da618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1da61c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA61Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA61Cu;
            // 0x1da620: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DA624u;
    // 0x1da624: 0x0  nop
    ctx->pc = 0x1da624u;
    // NOP
    // 0x1da628: 0x0  nop
    ctx->pc = 0x1da628u;
    // NOP
    // 0x1da62c: 0x0  nop
    ctx->pc = 0x1da62cu;
    // NOP
}
