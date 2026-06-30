#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00308610
// Address: 0x308610 - 0x308620
void sub_00308610_0x308610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308610_0x308610");
#endif

    ctx->pc = 0x308610u;

    // 0x308610: 0x3e00008  jr          $ra
    ctx->pc = 0x308610u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x308610u;
            // 0x308614: 0x80820077  lb          $v0, 0x77($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 119)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x308618u;
    // 0x308618: 0x0  nop
    ctx->pc = 0x308618u;
    // NOP
    // 0x30861c: 0x0  nop
    ctx->pc = 0x30861cu;
    // NOP
}
