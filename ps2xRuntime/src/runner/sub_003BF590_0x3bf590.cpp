#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003BF590
// Address: 0x3bf590 - 0x3bf5a0
void sub_003BF590_0x3bf590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BF590_0x3bf590");
#endif

    ctx->pc = 0x3bf590u;

    // 0x3bf590: 0x3e00008  jr          $ra
    ctx->pc = 0x3BF590u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BF594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BF590u;
            // 0x3bf594: 0x8c820e00  lw          $v0, 0xE00($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3584)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3BF598u;
    // 0x3bf598: 0x0  nop
    ctx->pc = 0x3bf598u;
    // NOP
    // 0x3bf59c: 0x0  nop
    ctx->pc = 0x3bf59cu;
    // NOP
}
