#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DC3A0
// Address: 0x1dc3a0 - 0x1dc3b0
void sub_001DC3A0_0x1dc3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DC3A0_0x1dc3a0");
#endif

    ctx->pc = 0x1dc3a0u;

    // 0x1dc3a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC3A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC3A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC3A0u;
            // 0x1dc3a4: 0x8c820964  lw          $v0, 0x964($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2404)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DC3A8u;
    // 0x1dc3a8: 0x0  nop
    ctx->pc = 0x1dc3a8u;
    // NOP
    // 0x1dc3ac: 0x0  nop
    ctx->pc = 0x1dc3acu;
    // NOP
}
