#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DCBC0
// Address: 0x1dcbc0 - 0x1dcbd0
void sub_001DCBC0_0x1dcbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DCBC0_0x1dcbc0");
#endif

    ctx->pc = 0x1dcbc0u;

    // 0x1dcbc0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCBC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCBC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCBC0u;
            // 0x1dcbc4: 0x8c820d70  lw          $v0, 0xD70($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3440)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DCBC8u;
    // 0x1dcbc8: 0x0  nop
    ctx->pc = 0x1dcbc8u;
    // NOP
    // 0x1dcbcc: 0x0  nop
    ctx->pc = 0x1dcbccu;
    // NOP
}
