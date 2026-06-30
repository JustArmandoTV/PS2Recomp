#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001604F0
// Address: 0x1604f0 - 0x160500
void sub_001604F0_0x1604f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001604F0_0x1604f0");
#endif

    ctx->pc = 0x1604f0u;

    // 0x1604f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1604F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1604F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1604F0u;
            // 0x1604f4: 0x24820008  addiu       $v0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1604F8u;
    // 0x1604f8: 0x0  nop
    ctx->pc = 0x1604f8u;
    // NOP
    // 0x1604fc: 0x0  nop
    ctx->pc = 0x1604fcu;
    // NOP
}
