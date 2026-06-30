#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004CA270
// Address: 0x4ca270 - 0x4ca280
void sub_004CA270_0x4ca270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CA270_0x4ca270");
#endif

    ctx->pc = 0x4ca270u;

    // 0x4ca270: 0x3e00008  jr          $ra
    ctx->pc = 0x4CA270u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CA274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CA270u;
            // 0x4ca274: 0x8c820040  lw          $v0, 0x40($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CA278u;
    // 0x4ca278: 0x0  nop
    ctx->pc = 0x4ca278u;
    // NOP
    // 0x4ca27c: 0x0  nop
    ctx->pc = 0x4ca27cu;
    // NOP
}
