#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00308600
// Address: 0x308600 - 0x308610
void sub_00308600_0x308600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308600_0x308600");
#endif

    ctx->pc = 0x308600u;

    // 0x308600: 0x3e00008  jr          $ra
    ctx->pc = 0x308600u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x308600u;
            // 0x308604: 0x8c820054  lw          $v0, 0x54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x308608u;
    // 0x308608: 0x0  nop
    ctx->pc = 0x308608u;
    // NOP
    // 0x30860c: 0x0  nop
    ctx->pc = 0x30860cu;
    // NOP
}
