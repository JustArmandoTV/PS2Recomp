#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00347030
// Address: 0x347030 - 0x347040
void sub_00347030_0x347030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00347030_0x347030");
#endif

    ctx->pc = 0x347030u;

    // 0x347030: 0x3e00008  jr          $ra
    ctx->pc = 0x347030u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x347034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x347030u;
            // 0x347034: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x347038u;
    // 0x347038: 0x0  nop
    ctx->pc = 0x347038u;
    // NOP
    // 0x34703c: 0x0  nop
    ctx->pc = 0x34703cu;
    // NOP
}
