#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0047C480
// Address: 0x47c480 - 0x47c490
void sub_0047C480_0x47c480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047C480_0x47c480");
#endif

    ctx->pc = 0x47c480u;

    // 0x47c480: 0x3e00008  jr          $ra
    ctx->pc = 0x47C480u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47C484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47C480u;
            // 0x47c484: 0x80820014  lb          $v0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x47C488u;
    // 0x47c488: 0x0  nop
    ctx->pc = 0x47c488u;
    // NOP
    // 0x47c48c: 0x0  nop
    ctx->pc = 0x47c48cu;
    // NOP
}
