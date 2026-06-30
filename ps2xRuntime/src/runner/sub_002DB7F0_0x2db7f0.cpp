#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DB7F0
// Address: 0x2db7f0 - 0x2db800
void sub_002DB7F0_0x2db7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB7F0_0x2db7f0");
#endif

    ctx->pc = 0x2db7f0u;

    // 0x2db7f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB7F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB7F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB7F0u;
            // 0x2db7f4: 0x8c820db8  lw          $v0, 0xDB8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3512)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DB7F8u;
    // 0x2db7f8: 0x0  nop
    ctx->pc = 0x2db7f8u;
    // NOP
    // 0x2db7fc: 0x0  nop
    ctx->pc = 0x2db7fcu;
    // NOP
}
