#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DC390
// Address: 0x1dc390 - 0x1dc3a0
void sub_001DC390_0x1dc390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DC390_0x1dc390");
#endif

    ctx->pc = 0x1dc390u;

    // 0x1dc390: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC390u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC390u;
            // 0x1dc394: 0x8c820968  lw          $v0, 0x968($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2408)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DC398u;
    // 0x1dc398: 0x0  nop
    ctx->pc = 0x1dc398u;
    // NOP
    // 0x1dc39c: 0x0  nop
    ctx->pc = 0x1dc39cu;
    // NOP
}
