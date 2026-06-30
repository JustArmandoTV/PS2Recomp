#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004CE9F0
// Address: 0x4ce9f0 - 0x4cea00
void sub_004CE9F0_0x4ce9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CE9F0_0x4ce9f0");
#endif

    ctx->pc = 0x4ce9f0u;

    // 0x4ce9f0: 0x3e00008  jr          $ra
    ctx->pc = 0x4CE9F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CE9F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CE9F0u;
            // 0x4ce9f4: 0x8c820d4c  lw          $v0, 0xD4C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3404)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CE9F8u;
    // 0x4ce9f8: 0x0  nop
    ctx->pc = 0x4ce9f8u;
    // NOP
    // 0x4ce9fc: 0x0  nop
    ctx->pc = 0x4ce9fcu;
    // NOP
}
