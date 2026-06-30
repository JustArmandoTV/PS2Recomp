#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DB540
// Address: 0x2db540 - 0x2db550
void sub_002DB540_0x2db540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB540_0x2db540");
#endif

    ctx->pc = 0x2db540u;

    // 0x2db540: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB540u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB540u;
            // 0x2db544: 0x8c8202b0  lw          $v0, 0x2B0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 688)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DB548u;
    // 0x2db548: 0x0  nop
    ctx->pc = 0x2db548u;
    // NOP
    // 0x2db54c: 0x0  nop
    ctx->pc = 0x2db54cu;
    // NOP
}
