#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0034FAB0
// Address: 0x34fab0 - 0x34fac0
void sub_0034FAB0_0x34fab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034FAB0_0x34fab0");
#endif

    ctx->pc = 0x34fab0u;

    // 0x34fab0: 0x3e00008  jr          $ra
    ctx->pc = 0x34FAB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34FAB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34FAB0u;
            // 0x34fab4: 0x808200a2  lb          $v0, 0xA2($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 162)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34FAB8u;
    // 0x34fab8: 0x0  nop
    ctx->pc = 0x34fab8u;
    // NOP
    // 0x34fabc: 0x0  nop
    ctx->pc = 0x34fabcu;
    // NOP
}
