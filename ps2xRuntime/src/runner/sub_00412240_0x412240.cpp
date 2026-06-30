#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00412240
// Address: 0x412240 - 0x412250
void sub_00412240_0x412240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00412240_0x412240");
#endif

    ctx->pc = 0x412240u;

    // 0x412240: 0x3e00008  jr          $ra
    ctx->pc = 0x412240u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x412244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x412240u;
            // 0x412244: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x412248u;
    // 0x412248: 0x0  nop
    ctx->pc = 0x412248u;
    // NOP
    // 0x41224c: 0x0  nop
    ctx->pc = 0x41224cu;
    // NOP
}
