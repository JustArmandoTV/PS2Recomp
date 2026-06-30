#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E0ED0
// Address: 0x1e0ed0 - 0x1e0ee0
void sub_001E0ED0_0x1e0ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0ED0_0x1e0ed0");
#endif

    ctx->pc = 0x1e0ed0u;

    // 0x1e0ed0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0ED0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0ED0u;
            // 0x1e0ed4: 0x2482004c  addiu       $v0, $a0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 76));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E0ED8u;
    // 0x1e0ed8: 0x0  nop
    ctx->pc = 0x1e0ed8u;
    // NOP
    // 0x1e0edc: 0x0  nop
    ctx->pc = 0x1e0edcu;
    // NOP
}
