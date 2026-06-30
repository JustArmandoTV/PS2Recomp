#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DCC80
// Address: 0x1dcc80 - 0x1dcc90
void sub_001DCC80_0x1dcc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DCC80_0x1dcc80");
#endif

    ctx->pc = 0x1dcc80u;

    // 0x1dcc80: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCC80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCC84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCC80u;
            // 0x1dcc84: 0x8c820d98  lw          $v0, 0xD98($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3480)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DCC88u;
    // 0x1dcc88: 0x0  nop
    ctx->pc = 0x1dcc88u;
    // NOP
    // 0x1dcc8c: 0x0  nop
    ctx->pc = 0x1dcc8cu;
    // NOP
}
