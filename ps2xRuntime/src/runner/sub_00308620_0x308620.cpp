#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00308620
// Address: 0x308620 - 0x308630
void sub_00308620_0x308620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308620_0x308620");
#endif

    ctx->pc = 0x308620u;

    // 0x308620: 0x3e00008  jr          $ra
    ctx->pc = 0x308620u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x308620u;
            // 0x308624: 0x80820c68  lb          $v0, 0xC68($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 3176)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x308628u;
    // 0x308628: 0x0  nop
    ctx->pc = 0x308628u;
    // NOP
    // 0x30862c: 0x0  nop
    ctx->pc = 0x30862cu;
    // NOP
}
