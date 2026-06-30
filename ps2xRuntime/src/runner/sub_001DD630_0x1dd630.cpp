#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DD630
// Address: 0x1dd630 - 0x1dd640
void sub_001DD630_0x1dd630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DD630_0x1dd630");
#endif

    ctx->pc = 0x1dd630u;

    // 0x1dd630: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD630u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD630u;
            // 0x1dd634: 0x8c820d9c  lw          $v0, 0xD9C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3484)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DD638u;
    // 0x1dd638: 0x0  nop
    ctx->pc = 0x1dd638u;
    // NOP
    // 0x1dd63c: 0x0  nop
    ctx->pc = 0x1dd63cu;
    // NOP
}
