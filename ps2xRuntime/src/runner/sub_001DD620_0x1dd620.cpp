#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DD620
// Address: 0x1dd620 - 0x1dd630
void sub_001DD620_0x1dd620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DD620_0x1dd620");
#endif

    ctx->pc = 0x1dd620u;

    // 0x1dd620: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD620u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD620u;
            // 0x1dd624: 0x8c820da0  lw          $v0, 0xDA0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3488)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DD628u;
    // 0x1dd628: 0x0  nop
    ctx->pc = 0x1dd628u;
    // NOP
    // 0x1dd62c: 0x0  nop
    ctx->pc = 0x1dd62cu;
    // NOP
}
