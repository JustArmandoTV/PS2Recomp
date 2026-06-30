#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004554D0
// Address: 0x4554d0 - 0x4554e0
void sub_004554D0_0x4554d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004554D0_0x4554d0");
#endif

    ctx->pc = 0x4554d0u;

    // 0x4554d0: 0x3e00008  jr          $ra
    ctx->pc = 0x4554D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4554D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4554D0u;
            // 0x4554d4: 0x8c820104  lw          $v0, 0x104($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4554D8u;
    // 0x4554d8: 0x0  nop
    ctx->pc = 0x4554d8u;
    // NOP
    // 0x4554dc: 0x0  nop
    ctx->pc = 0x4554dcu;
    // NOP
}
