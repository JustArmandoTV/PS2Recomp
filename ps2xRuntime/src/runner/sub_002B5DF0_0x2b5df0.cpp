#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B5DF0
// Address: 0x2b5df0 - 0x2b5e00
void sub_002B5DF0_0x2b5df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B5DF0_0x2b5df0");
#endif

    ctx->pc = 0x2b5df0u;

    // 0x2b5df0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2b5df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b5df4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5DF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B5DF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5DF4u;
            // 0x2b5df8: 0x2442000c  addiu       $v0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B5DFCu;
    // 0x2b5dfc: 0x0  nop
    ctx->pc = 0x2b5dfcu;
    // NOP
}
