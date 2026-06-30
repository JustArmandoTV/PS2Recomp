#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DD4F0
// Address: 0x1dd4f0 - 0x1dd500
void sub_001DD4F0_0x1dd4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DD4F0_0x1dd4f0");
#endif

    ctx->pc = 0x1dd4f0u;

    // 0x1dd4f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD4F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD4F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD4F0u;
            // 0x1dd4f4: 0x248202c0  addiu       $v0, $a0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 704));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DD4F8u;
    // 0x1dd4f8: 0x0  nop
    ctx->pc = 0x1dd4f8u;
    // NOP
    // 0x1dd4fc: 0x0  nop
    ctx->pc = 0x1dd4fcu;
    // NOP
}
