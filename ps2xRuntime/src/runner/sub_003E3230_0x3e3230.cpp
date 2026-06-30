#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003E3230
// Address: 0x3e3230 - 0x3e3240
void sub_003E3230_0x3e3230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E3230_0x3e3230");
#endif

    ctx->pc = 0x3e3230u;

    // 0x3e3230: 0x3e00008  jr          $ra
    ctx->pc = 0x3E3230u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E3234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E3230u;
            // 0x3e3234: 0x8c820068  lw          $v0, 0x68($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E3238u;
    // 0x3e3238: 0x0  nop
    ctx->pc = 0x3e3238u;
    // NOP
    // 0x3e323c: 0x0  nop
    ctx->pc = 0x3e323cu;
    // NOP
}
