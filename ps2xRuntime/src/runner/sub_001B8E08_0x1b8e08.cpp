#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B8E08
// Address: 0x1b8e08 - 0x1b8e20
void sub_001B8E08_0x1b8e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8E08_0x1b8e08");
#endif

    ctx->pc = 0x1b8e08u;

    // 0x1b8e08: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x1b8e08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1b8e0c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1b8e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1b8e10: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b8e10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b8e14: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1b8e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1b8e18: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8E18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8E1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8E18u;
            // 0x1b8e1c: 0x8c821fa4  lw          $v0, 0x1FA4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8100)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B8E20u;
}
