#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DCA40
// Address: 0x1dca40 - 0x1dca50
void sub_001DCA40_0x1dca40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DCA40_0x1dca40");
#endif

    ctx->pc = 0x1dca40u;

    // 0x1dca40: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCA40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCA44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCA40u;
            // 0x1dca44: 0x8c820d6c  lw          $v0, 0xD6C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3436)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DCA48u;
    // 0x1dca48: 0x0  nop
    ctx->pc = 0x1dca48u;
    // NOP
    // 0x1dca4c: 0x0  nop
    ctx->pc = 0x1dca4cu;
    // NOP
}
