#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0036BBD0
// Address: 0x36bbd0 - 0x36bbe0
void sub_0036BBD0_0x36bbd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036BBD0_0x36bbd0");
#endif

    ctx->pc = 0x36bbd0u;

    // 0x36bbd0: 0x3e00008  jr          $ra
    ctx->pc = 0x36BBD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36BBD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36BBD0u;
            // 0x36bbd4: 0x24820830  addiu       $v0, $a0, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2096));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36BBD8u;
    // 0x36bbd8: 0x0  nop
    ctx->pc = 0x36bbd8u;
    // NOP
    // 0x36bbdc: 0x0  nop
    ctx->pc = 0x36bbdcu;
    // NOP
}
