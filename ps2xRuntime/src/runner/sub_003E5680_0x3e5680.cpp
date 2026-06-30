#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003E5680
// Address: 0x3e5680 - 0x3e56a0
void sub_003E5680_0x3e5680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E5680_0x3e5680");
#endif

    ctx->pc = 0x3e5680u;

    // 0x3e5680: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x3e5680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x3e5684: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3e5684u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3e5688: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3e5688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3e568c: 0x3e00008  jr          $ra
    ctx->pc = 0x3E568Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E5690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E568Cu;
            // 0x3e5690: 0x8c420008  lw          $v0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E5694u;
    // 0x3e5694: 0x0  nop
    ctx->pc = 0x3e5694u;
    // NOP
    // 0x3e5698: 0x0  nop
    ctx->pc = 0x3e5698u;
    // NOP
    // 0x3e569c: 0x0  nop
    ctx->pc = 0x3e569cu;
    // NOP
}
