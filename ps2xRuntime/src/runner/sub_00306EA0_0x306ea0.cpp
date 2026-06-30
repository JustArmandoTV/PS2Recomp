#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00306EA0
// Address: 0x306ea0 - 0x306eb0
void sub_00306EA0_0x306ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00306EA0_0x306ea0");
#endif

    ctx->pc = 0x306ea0u;

    // 0x306ea0: 0x3e00008  jr          $ra
    ctx->pc = 0x306EA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x306EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x306EA0u;
            // 0x306ea4: 0x248208d0  addiu       $v0, $a0, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x306EA8u;
    // 0x306ea8: 0x0  nop
    ctx->pc = 0x306ea8u;
    // NOP
    // 0x306eac: 0x0  nop
    ctx->pc = 0x306eacu;
    // NOP
}
