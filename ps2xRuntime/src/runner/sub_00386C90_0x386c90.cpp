#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00386C90
// Address: 0x386c90 - 0x386ca0
void sub_00386C90_0x386c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00386C90_0x386c90");
#endif

    ctx->pc = 0x386c90u;

    // 0x386c90: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x386c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x386c94: 0x3e00008  jr          $ra
    ctx->pc = 0x386C94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x386C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x386C94u;
            // 0x386c98: 0x8c426118  lw          $v0, 0x6118($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24856)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x386C9Cu;
    // 0x386c9c: 0x0  nop
    ctx->pc = 0x386c9cu;
    // NOP
}
