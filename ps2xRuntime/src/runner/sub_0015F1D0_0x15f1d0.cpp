#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015F1D0
// Address: 0x15f1d0 - 0x15f1e0
void sub_0015F1D0_0x15f1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015F1D0_0x15f1d0");
#endif

    ctx->pc = 0x15f1d0u;

    // 0x15f1d0: 0x3e00008  jr          $ra
    ctx->pc = 0x15F1D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15F1D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F1D0u;
            // 0x15f1d4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15F1D8u;
    // 0x15f1d8: 0x0  nop
    ctx->pc = 0x15f1d8u;
    // NOP
    // 0x15f1dc: 0x0  nop
    ctx->pc = 0x15f1dcu;
    // NOP
}
