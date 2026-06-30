#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DCC90
// Address: 0x1dcc90 - 0x1dcca0
void sub_001DCC90_0x1dcc90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DCC90_0x1dcc90");
#endif

    ctx->pc = 0x1dcc90u;

    // 0x1dcc90: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCC90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCC94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCC90u;
            // 0x1dcc94: 0x808211aa  lb          $v0, 0x11AA($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4522)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DCC98u;
    // 0x1dcc98: 0x0  nop
    ctx->pc = 0x1dcc98u;
    // NOP
    // 0x1dcc9c: 0x0  nop
    ctx->pc = 0x1dcc9cu;
    // NOP
}
