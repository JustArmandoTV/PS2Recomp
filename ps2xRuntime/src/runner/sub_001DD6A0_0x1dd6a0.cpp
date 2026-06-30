#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DD6A0
// Address: 0x1dd6a0 - 0x1dd6b0
void sub_001DD6A0_0x1dd6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DD6A0_0x1dd6a0");
#endif

    ctx->pc = 0x1dd6a0u;

    // 0x1dd6a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD6A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD6A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD6A0u;
            // 0x1dd6a4: 0x90820ce4  lbu         $v0, 0xCE4($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3300)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DD6A8u;
    // 0x1dd6a8: 0x0  nop
    ctx->pc = 0x1dd6a8u;
    // NOP
    // 0x1dd6ac: 0x0  nop
    ctx->pc = 0x1dd6acu;
    // NOP
}
