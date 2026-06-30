#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DCBA0
// Address: 0x1dcba0 - 0x1dcbb0
void sub_001DCBA0_0x1dcba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DCBA0_0x1dcba0");
#endif

    ctx->pc = 0x1dcba0u;

    // 0x1dcba0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCBA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCBA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCBA0u;
            // 0x1dcba4: 0x8c820550  lw          $v0, 0x550($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1360)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DCBA8u;
    // 0x1dcba8: 0x0  nop
    ctx->pc = 0x1dcba8u;
    // NOP
    // 0x1dcbac: 0x0  nop
    ctx->pc = 0x1dcbacu;
    // NOP
}
