#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CF720
// Address: 0x2cf720 - 0x2cf730
void sub_002CF720_0x2cf720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CF720_0x2cf720");
#endif

    ctx->pc = 0x2cf720u;

    // 0x2cf720: 0x3e00008  jr          $ra
    ctx->pc = 0x2CF720u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF720u;
            // 0x2cf724: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CF728u;
    // 0x2cf728: 0x0  nop
    ctx->pc = 0x2cf728u;
    // NOP
    // 0x2cf72c: 0x0  nop
    ctx->pc = 0x2cf72cu;
    // NOP
}
