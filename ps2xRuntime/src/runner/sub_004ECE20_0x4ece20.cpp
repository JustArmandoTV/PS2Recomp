#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004ECE20
// Address: 0x4ece20 - 0x4ece30
void sub_004ECE20_0x4ece20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ECE20_0x4ece20");
#endif

    ctx->pc = 0x4ece20u;

    // 0x4ece20: 0x3e00008  jr          $ra
    ctx->pc = 0x4ECE20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ECE24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4ECE20u;
            // 0x4ece24: 0x8c8201c4  lw          $v0, 0x1C4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 452)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4ECE28u;
    // 0x4ece28: 0x0  nop
    ctx->pc = 0x4ece28u;
    // NOP
    // 0x4ece2c: 0x0  nop
    ctx->pc = 0x4ece2cu;
    // NOP
}
