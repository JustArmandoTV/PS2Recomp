#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00188C48
// Address: 0x188c48 - 0x188c58
void sub_00188C48_0x188c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00188C48_0x188c48");
#endif

    ctx->pc = 0x188c48u;

    // 0x188c48: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x188c48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x188c4c: 0x3e00008  jr          $ra
    ctx->pc = 0x188C4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188C4Cu;
            // 0x188c50: 0x244269e0  addiu       $v0, $v0, 0x69E0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27104));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x188C54u;
    // 0x188c54: 0x0  nop
    ctx->pc = 0x188c54u;
    // NOP
}
