#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003C3110
// Address: 0x3c3110 - 0x3c3120
void sub_003C3110_0x3c3110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C3110_0x3c3110");
#endif

    ctx->pc = 0x3c3110u;

    // 0x3c3110: 0x3e00008  jr          $ra
    ctx->pc = 0x3C3110u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C3114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C3110u;
            // 0x3c3114: 0x80820005  lb          $v0, 0x5($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C3118u;
    // 0x3c3118: 0x0  nop
    ctx->pc = 0x3c3118u;
    // NOP
    // 0x3c311c: 0x0  nop
    ctx->pc = 0x3c311cu;
    // NOP
}
