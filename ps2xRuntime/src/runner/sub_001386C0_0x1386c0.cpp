#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001386C0
// Address: 0x1386c0 - 0x1386d0
void sub_001386C0_0x1386c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001386C0_0x1386c0");
#endif

    ctx->pc = 0x1386c0u;

    // 0x1386c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1386C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1386C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1386C0u;
            // 0x1386c4: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1386C8u;
    // 0x1386c8: 0x0  nop
    ctx->pc = 0x1386c8u;
    // NOP
    // 0x1386cc: 0x0  nop
    ctx->pc = 0x1386ccu;
    // NOP
}
