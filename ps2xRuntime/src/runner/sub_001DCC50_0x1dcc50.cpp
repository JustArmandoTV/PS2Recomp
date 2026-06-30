#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DCC50
// Address: 0x1dcc50 - 0x1dcc60
void sub_001DCC50_0x1dcc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DCC50_0x1dcc50");
#endif

    ctx->pc = 0x1dcc50u;

    // 0x1dcc50: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCC50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCC54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCC50u;
            // 0x1dcc54: 0x80820076  lb          $v0, 0x76($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 118)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DCC58u;
    // 0x1dcc58: 0x0  nop
    ctx->pc = 0x1dcc58u;
    // NOP
    // 0x1dcc5c: 0x0  nop
    ctx->pc = 0x1dcc5cu;
    // NOP
}
